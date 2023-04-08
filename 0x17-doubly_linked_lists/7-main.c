#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("--------first------\n");
    insert_dnodeint_at_index(&head, 0, 100);
    print_dlistint(head);
    printf("--------middle------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    printf("---------end------\n");
    insert_dnodeint_at_index(&head, 8, 800);
    print_dlistint(head);
    printf("--------negative---------\n");
    insert_dnodeint_at_index(&head, -3, 300);
    print_dlistint(head);

    printf("-----out of ranvge----\n");
    insert_dnodeint_at_index(&head, 20, 20000);
    print_dlistint(head);
    
    printf("-----FINAL LIST NODE----\n");
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
