#include "lists.h"

/**
 * free_list_safe - can free a list with a loop or not
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *slow = *h;
	listint_t *temp;
	listint_t *fast = *h;

	if (!h)
		return (98);

	while (fast && fast->next)
	{
		nodes++;
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(temp);

		if (slow == fast)
		{
			free(slow), free(slow->next);
			nodes += 2;
			return (nodes);
		}
	}
	while (slow)
	{
		temp = slow, nodes++;
		slow = slow->next;
		free (temp);
	}

	return (nodes);
}
