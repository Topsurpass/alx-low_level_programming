#include "lists.h"

/**
 * print_listint - print all the elements of a
 * singly linked list
 * @h: the head node
 *
 * Return: list of all the elements
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
