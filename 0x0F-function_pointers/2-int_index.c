#include <stdlib.h>
#include "main.h"

/**
 * int_index - search for an integer in an array
 * @array: the array
 * @size: the size of the array
 * @cmp: the call back function
 *
 * Return: the index of the integer found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) == 1)
		{
			index = i;
			break;
		}
		else
			index = -1;
	}
	return (index);
}
