#include "lists.h"

/**
 * free_listint - free the singly linked list
 * @head: the head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
