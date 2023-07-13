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
 * recur_binary_search - Recursively search values in an array
 * @array: The array to search
 * @value: The value to search
 * @start: The index to start searching from
 * @end: The index to end search
 *
 * Return: -1 (not found) or index of value found
 */
int recur_binary_search(int *array, int value, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);
	mid = start + (end - start) / 2;

	print_b_arr(array, start, end);
	if (array[mid] == value)
	{
		/* check if it's first occurence or not */
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (recur_binary_search(array, value, start, mid - 1));
	}
	else if (array[mid] < value)
		return (recur_binary_search(array, value, mid + 1, end));
	else
		return (recur_binary_search(array, value, start, mid - 1));
}
/**
 * advanced_binary - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm and return index of first
 * occurence
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 (not found or null) or index of found element
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recur_binary_search(array, value, 0, size - 1));
}
