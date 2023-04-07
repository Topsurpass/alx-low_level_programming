#include "hash_tables.h"

/**
 * hash_table_create - The function that creates a hash table
 * @size: This is the size of the hashTable or the array
 *
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;
	hash_node_t **item_array;

	if (size == 0)
		return (NULL);

	/* Assign memory for the hashtable */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Assign memory for the array holding the items */
	item_array = malloc(sizeof(*item_array) * size);

	if (item_array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Fill each node i.e item space with NULL */
	while (i < size)
	{
		item_array[i] = NULL;
		i++;
	}

	/* Based on hashtable struct set values for the size and array */
	table->size = size;
	table->array = item_array;

	return (table);
}
