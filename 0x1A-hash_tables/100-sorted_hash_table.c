#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the hash table
 *
 * Return: the new hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;
	shash_node_t **array;

	if (size == 0) /* If the size is 0 return nothing */
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size); /* alloc space for the array in ht */
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++) /* make all = NULL by default */
		array[i] = NULL;

	table->size = size;
	table->array = array;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * sort_n_insert - compare and sort then insert node into list
 * @ht: The hashtable
 * @item: The item to sort and add
 *
 * Return: 1 if successful and 0 if otherwise
 */

int sort_n_insert(shash_table_t *ht, shash_node_t *item)
{
	shash_node_t *temp;

	if (ht->shead == NULL) /* let first item be the head and the tail node */
	{
		ht->shead = item;
		ht->stail = item;
		return (1);
	}
	/* compare new item with the head node, if <=, make d head */
	if (strcmp(item->key, ht->shead->key) <= 0)
	{
		item->snext = ht->shead;
		ht->shead->sprev = item;
		ht->shead = item;
	}
	/* compare new item with the tail, if >=, make the tail */
	else if (strcmp(item->key, ht->stail->key) >= 0)
	{
		item->sprev = ht->stail;
		ht->stail->snext = item;
		ht->stail = item;
	}
	/* if new item < tail but > head, add new item to the middle */
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL)
		{
			if (strcmp(item->key, temp->snext->key) < 0)
				break;
			temp = temp->snext;
		}
		item->snext = temp->snext;
		item->sprev = temp;
		temp->snext->sprev = item;
		temp->snext = item;
	}
	return (1);
}

/**
 * screate_item - This function creates items for the hashtable array
 * i.e the key:value pair contained in the hashtable
 * @ht: The sorted hash table
 * @key: The key for the hashtable
 * @value: The equivalent value for the key
 * @idx: The new item index
 *
 * Return: The node or the item created
 */

int screate_item(shash_table_t *ht, const char *key, const char *value,
		unsigned long int idx)
{
	shash_node_t *item = NULL;

	item = malloc(sizeof(shash_node_t));

	if (item == NULL)
		return (0);
	if (ht == NULL || value == NULL || key == NULL || strlen(key) == 0)
		return (0);

	item->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}

	item->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	item->sprev = NULL;
	item->snext = NULL;

	/* if no collision in array index, point to NULL i.e no linked list */
	if (ht->array[idx] == NULL)
		item->next = NULL;
	else
		item->next = ht->array[idx]; /* otherwise form linked list */
	ht->array[idx] = item; /* new item becomes the head node */

	return (sort_n_insert(ht, item)); /* sort the nodes */
}

/**
 * shash_table_set - This function adds an element to sorted hash table
 * @ht: Pointer to the hash table
 * @key: The key for the new item
 * @value: The equivalent value of the key for the new item
 *
 * Return: The new node
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *item = NULL;
	char *new_value;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || value == NULL ||
			key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	item = ht->array[idx];

	/* if item already existed at this index, compare with the new item  */
	while (item != NULL && strcmp(key, item->key) != 0)
		item = item->next;
	if (item != NULL) /* if both keys are the same, update the existing's value */
	{
		new_value = strdup(value);
		if (new_value == NULL)
			return (0);
		if (item->value != NULL)
			free(item->value);

		item->value = new_value;
		return (1);
	}

	return (screate_item(ht, key, value, idx)); /* creat nw sorted item */

}
/**
 * shash_table_print - Print the hash table from head node
 * @ht: The pointer to the hash table
 *
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *brk = "";

	if (ht == NULL || ht->array == NULL)
		return;
	temp = ht->shead;

	printf("{");
	while (temp != NULL)
	{
		printf("%s", brk);
		printf("'%s': '%s'", temp->key, temp->value);
		brk = ", ";
		temp = temp->snext;
	}
	puts("}");
}
/**
 * shash_table_get - This function retrieves a value associated
 * with a key
 * @ht: The sorted hash table to look for the key
 * @key: The key to look for
 *
 * Return: NULL if not found else the key's value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((unsigned const char*) key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
/**
 * shash_table_print_rev - Print the hash table in reverse order
 * @ht: The pointer to the hash table
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *brk = "";

	if (ht == NULL || ht->array == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		printf("%s", brk);
		printf("'%s': '%s'", temp->key, temp->value);
		brk = ", ";
		temp = temp->sprev;
	}
	puts("}");
}
/**
 * shash_table_delete - Delete the hash table
 * @ht: The hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx = 0;
	shash_node_t *item, *next;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (idx < ht->size)
	{
		item = ht->array[idx];
		while (item != NULL)
		{
			next = item->next;
			if (item->key != NULL)
				free(item->key);
			if (item->value != NULL)
				free(item->value);
			item->key = NULL;
			item->value = NULL;
			free(item);
			item = next;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
