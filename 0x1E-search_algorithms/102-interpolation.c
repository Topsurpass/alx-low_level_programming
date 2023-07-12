#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array:  A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 (if value not found) else return index of the value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, position;

	if (array == NULL)
		return (-1);

	position = left + (((double)(right - left) / (array[right] - array[left]))
		   * (value - array[left]));
	while (position < size)
	{
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		else if (array[position] < value)
			left = position + 1;
		else
			right = position - 1;
		position = left + (((double)(right - left) / (array[right] - array[left]))
			   * (value - array[left]));
	}
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
}
