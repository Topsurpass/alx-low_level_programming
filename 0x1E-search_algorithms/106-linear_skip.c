#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *mv;

	if (list == NULL)
		return (NULL);

	mv = list;

	do {
		list = mv;
		mv = mv->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)mv->index, mv->n);
	} while (mv->express && mv->n < value);

	if (mv->express == NULL)
	{
		list = mv;
		while (mv->next)
			mv = mv->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)mv->index);

	while (list != mv->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
