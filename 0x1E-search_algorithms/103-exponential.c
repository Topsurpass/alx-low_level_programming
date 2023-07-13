#include "search_algos.h"

/**
 * print_b_arr - Print binary array element from range left to right
 * @array: Pointer to the first element of the array
 * @left: The start range of the array
 * @right: The end range of the array
 *
 * Return: nothing
 */
void print_b_arr(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search_ex - A function that searches for a value in a sorted array
 * of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @strt: The index to start search from
 * @last: The index to end the search
 * @value: The value to search for
 *
 * Return: -1 (not found or null) or index of found element
 */

int binary_search_ex(int *array, int value, size_t strt, size_t last)
{
	size_t start, mid, end;

	if (array == NULL)
		return (-1);

	start = strt;
	end = mid = last;

	while (start <= end)
	{
		print_b_arr(array, start, end);
		mid = (end + start) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - A function that searches for a value in a sorted
 * array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 (not found or null) or index of found element
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	/* Check if element is at first index */
	if (array[0] == value)
		return (0);
	/*
	 * Start from 2nd index and find the range where the
	 * element is / can be found
	 */
	index = 1;
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}
	if (index == size)
		printf("Value found between indexes [%ld] and [%ld]\n",
				index / 2, index - 1);
	else
		printf("Value found between indexes [%ld] and [%ld]\n",
				index / 2, index);

	if (index >= size)
		return (binary_search_ex(array, value, index / 2, index - 1));
	else
		return (binary_search_ex(array, value, index / 2, index));
	return (-1);
}
