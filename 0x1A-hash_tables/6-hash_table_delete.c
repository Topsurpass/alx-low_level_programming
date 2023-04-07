#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
