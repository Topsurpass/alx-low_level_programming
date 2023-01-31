#include "lists.h"

/**
 * count_nodes - count nodes to know now many unique nodes to print
 * @head: head pointer of linked list
 * Return: number of unique nodes in list before a loop
 */
int count_nodes(const listint_t *head)
{
	int count = 0;
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * check_loop - find if there's a loop in linked list
 * @head: head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */
int check_loop(const listint_t *head)
{
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - print linked list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int counter = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = check_loop(head);

	if (loop_found == 1)
	{
		counter = count_nodes(head);
		for (loop_found = 0; loop_found < counter; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}
