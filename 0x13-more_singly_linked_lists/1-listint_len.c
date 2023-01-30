#include "lists.h"

/**
 * listint_len - return number of element in a
 * singly linked list
 * @h: the head node
 *
 * Return: the number of elements in a linked
 * list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
