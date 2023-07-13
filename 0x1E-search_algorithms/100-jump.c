#include "search_algos.h"

/**
 * min - A function tha returns the smallest value between 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The smallest number
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * jump_search - A function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: The sorted array to search from
 * @size: The size of the sorted array
 * @value: The value to search for
 *
 * Return: -1 (if value is not found) or index of value found
 */
int jump_search(int *array, size_t size, int value)
{
	int index = 0, k = 0, prev = 0, jumps = (int)sqrt((double)size);

	if (array == NULL || size == 0)
		return (-1);

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * jumps;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
