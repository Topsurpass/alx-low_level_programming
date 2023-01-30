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

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position or index
 *
 * @head: the head node
 * @idx: the target index position
 * @n: the value of the new node
 *
 * Return: the new singly linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	size_t length;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	length = listint_len(*head);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (idx > length)
		return (NULL);
	temp = *head;

	while (i < idx)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
