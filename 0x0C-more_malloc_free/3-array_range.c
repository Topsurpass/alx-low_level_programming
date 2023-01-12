#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * between a set range
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: an array of integers
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; max > min; i++)
	{
		arr[i] = min;
		min += 1;
	}
	return (arr);
}

