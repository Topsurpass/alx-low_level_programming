#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the size
 *
 * Return: exit status 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}

