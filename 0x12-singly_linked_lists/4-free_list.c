#include "lists.h"

/**
 * free_list - free allocated space for linked stuctures
 * @head: the structure node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
