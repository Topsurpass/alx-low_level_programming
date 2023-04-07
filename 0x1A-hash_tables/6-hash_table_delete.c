#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
