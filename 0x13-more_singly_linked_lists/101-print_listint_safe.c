#include "main.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (!head)
		return (98);

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("[%p] %d\n", (void *)slow->next, slow->next->n);
			printf("-> [%p] %d\n", (void *)fast->next->next,
					fast->next->next->n);
			nodes += 2;
			return (nodes);
		}
	}
	while (slow_ptr)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++;
		slow = slow->next;
	}


	return (nodes);
}
}
