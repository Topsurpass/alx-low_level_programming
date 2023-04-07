#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		curr = ht->array[i];
		while (curr != NULL) /* free collision if an item is present */
		{
			temp = curr->next;
			if (curr->key != NULL)
				free(curr->key);
			if (curr->value != NULL)
				free(curr->value);
			curr->key = NULL;
			curr->value = NULL;
			free(curr);
			curr = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
