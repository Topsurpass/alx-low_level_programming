#include "hash_tables.h"
/**
 * key_index - A function that gives the index of a key
 * @key: The key to get its index
 * @size: The size of the hashtable array
 *
 * Return: The index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);


	index = hash_djb2(key) % size;

	return (index);
}
