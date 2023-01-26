#include "lists.h"

/**
 * list_len - return the number of elements in a linked
 * structure list
 * @h: the structure list
 *
 * Return: number of elements in a linked structure list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
