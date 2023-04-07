#include "hash_tables.h"

/**
 * hash_table_print - Print the hash table
 * @ht: The pointer to the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter;

	counter = 0, i = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
			counter++;
		i++;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (counter > 1)
				printf(", ");
			counter--;
		}
	}
	puts("}");
}
