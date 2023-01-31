#include "lists.h"

/**
 * pop_listint - remove the head node of a listint_t
 * linked list
 * @head: the head node
 *
 * Return: the head node's data i.e n
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
