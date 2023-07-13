#include "search_algos.h"
/**
 * jump_list - A function that searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @list: The singly linked list
 * @size: The size of the singly linked list
 * @value: The value to search for
 *
 * Return: NULL(if not found) or node with the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, k = 0, jumps = (size_t)sqrt((double)size);
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	do {
		prev = list;
		k++;
		index = k * jumps;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked array[%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked array[%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
