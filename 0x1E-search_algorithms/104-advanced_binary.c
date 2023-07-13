#include "search_algos.h"
/**
 * recur_binary_search - Recursively search values in an array
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search
 *
 * Return: -1 (not found) or index of value found
 */
int recur_binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (recur_binary_search(array, mid + 1, value));
		return ((int)mid);
	}
	if (value < array[mid])
		return (recur_binary_search(array, mid + 1, value));

	mid++;
	return (recur_binary_search(array + mid, size - mid, value) + mid);
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
	int idx;

	idx = recur_binary_search(array, size, value);
	return ((idx >= 0 && array[idx] != value) ? -1 : idx);

}
