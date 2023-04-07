#include "hash_tables.h"

/**
 * hash_table_print - Print the hash table
 * @ht: The pointer to the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *brk = "";

	i = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			printf("%s", brk);
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			brk = ", ";
			ht->array[i] = ht->array[i]->next;
		}
	}
	puts("}");
}
