#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: the head node
 *
 * Return:  nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}

}
