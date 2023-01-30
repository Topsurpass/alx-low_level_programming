#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * linked list
 * @head: the head node
 * @index: the target index
 *
 * Return: the index-th node of the listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while ((i < index) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);

	return (temp);
}
