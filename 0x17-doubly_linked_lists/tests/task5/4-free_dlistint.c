#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: ptr to  list head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *temp;
	size_t fwd;

	if (head)
	{
		fwd = !head->prev ? 1 : 0;
		curr = head, temp = head;
		if (fwd)
		{
			while (temp->next)
			{
				temp = temp->next;
				temp->prev = NULL;
				head = temp;
				free(curr);
				curr = temp;
			}
		}
		else
		{
			while (temp->prev)
			{
				temp = temp->prev;
				temp->next = NULL;
				head = temp;
				free(curr);
				curr = temp;
			}
		}
		free(head), head = NULL;
	}
}
