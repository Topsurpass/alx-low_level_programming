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
 * binary_search - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 (not found or null) or index of found element
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (array == NULL)
		return (-1);

	start = 0;
	end = mid = size - 1;

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
