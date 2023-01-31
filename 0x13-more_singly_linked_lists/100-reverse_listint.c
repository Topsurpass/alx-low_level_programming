#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: the head node
 *
 * Return: reversed singly linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (*head == NULL)
		return (NULL);
	current = *head;
	prev = NULL;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}

