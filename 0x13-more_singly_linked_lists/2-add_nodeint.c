#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * of a singly linked list
 * @head: the head node
 * @n: the value of the new node
 *
 * Return: the new node in a singly linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
