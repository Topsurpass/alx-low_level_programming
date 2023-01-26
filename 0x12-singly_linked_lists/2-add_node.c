#include "lists.h"

/**
 * _strlen - get the length of string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(s + i));
}
/**
 * add_node - add new node at the beginning of linked list
 * list
 * @head: the head of the node / the first node
 * @str: string value of each node
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);

	if (head == NULL)
		return (NULL);

	newNode->next = *head;
	*head = newNode;


	return (newNode);
}
