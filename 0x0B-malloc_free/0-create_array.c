#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of chars, and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the character to initialize it with
 *
 * Return: A pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
