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

	/* Allocate space for the  table */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Allocate space for the array */
	item_array = malloc(sizeof(*item_array) * size);

	if (item_array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		item_array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = item_array;

	return (table);
}
