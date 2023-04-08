#include "hash_tables.h"

/**
 * create_item - This function creates items for the hashtable array
 * i.e the key:value pair contained in the hashtable
 * @key: The key for the hashtable
 * @value: The equivalent value for the key
 *
 * Return: The node or the item created
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	if (strlen(key) == 0 || value == NULL || key == NULL)
		return (NULL);


	item->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}

	item->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}

/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: The key for the new item
 * @value: The equivalent value of the key for the new item
 *
 * Return: The new node
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *temp;
	char *new_value;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL)
		return (0);
	item = create_item(key, value); /* The new item to add to the array */
	if (item == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL) /* Check if the hash table array at this index is free */
	{
		if (idx >= ht->size) /* if idx is out of range */
		{
			free(item);
			return (0);
		}
		ht->array[idx] = item; /* else assign the item to the index */
		return (1);
	}
	else
	{
		while (temp != NULL)
		{ /* If the current node's key == new node's key, update value */
			if (strcmp(temp->key, key) == 0)
			{
				new_value = strdup(value);
				free(ht->array[idx]->value);
				ht->array[idx]->value = new_value;
				return (1);
			}
			temp = temp->next;
		} /* If curr node's key != new node's key, add at the begnng of d list*/
		item->next = ht->array[idx];
		ht->array[idx] = item;
		return (1);
	}
}
