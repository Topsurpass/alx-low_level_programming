#include "main.h"
/**
 * set_bit - set bit to 1 at given index
 * @n: the number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_size;

	max_size = (sizeof(max_size) * 8);

	if (index > max_size)
		return (-1);

	*n = (*n ^ (1 << index));
	return (1);
}
