#include "lists.h"

/**
 * sum_listint - return the sum of all the data
 * of a linked list
 * @head: the head node
 *
 * Return: the sum of all the linked list data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

