#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for aan array
 * @nmemb: number of array elements
 * @size: the size of each element of nmembin bytes
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *) arr + i) = 0;

	return (arr);
}
