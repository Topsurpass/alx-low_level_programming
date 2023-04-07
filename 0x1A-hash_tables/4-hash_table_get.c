#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated
 * with a key
 * @ht: The hash table to look for the key
 * @key: The key to look for
 *
 * Return: NULL if not found else the key's value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
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
