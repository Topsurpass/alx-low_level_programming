#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at specified index
 * @head: the head node
 * @index: the position / index
 *
 * Return: modified singly linked list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	prev = *head;
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index - 1 && prev != NULL)
		{
			prev = prev->next;
			i++;
		}
		if (i != (index - 1) || prev->next == NULL)
			return (-1);

		temp = prev->next;
		prev->next = temp->next;
		free(temp);
	}

	return (1);
}
