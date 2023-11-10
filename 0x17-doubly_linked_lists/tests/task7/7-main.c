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
    dlistint_t *head, *node1, *node2;

	node1 = malloc(sizeof(dlistint_t));
	node2 = malloc(sizeof(dlistint_t));
	if (!node1 || !node2)
		return (1);

	node1->n = -10, node1->next = NULL, node1->prev = node2;
	node2->n = -5, node2->prev = NULL, node2->next = node1;
    head = node1;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 11, 99999);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}