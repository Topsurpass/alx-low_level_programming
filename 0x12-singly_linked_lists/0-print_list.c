#include "lists.h"

/**
 * print_list - print all the elements of a structure list
 * @h: the structure pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		counter++;
	}

	return (counter);
}
