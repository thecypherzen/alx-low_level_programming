#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a listint_t list.
 * @head: pointer to head of list
 * @idx: index to insert (starts at 0);
 * @n: value to insert
 * Return: ptr to new node on success. NULL if failed or impossible to add.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *oldNode, *newNode;
	_uint list_len;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode || (!(*head) && idx))
		return (NULL);

	list_len = listint_len(*head);
	if (idx > list_len)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (idx > 0)
	{
		oldNode = get_nodeint_at_index(*head, idx - 1);
		newNode->next = oldNode->next;
		oldNode->next = newNode;
	}
	else
	{
		oldNode = *head;
		newNode->next = oldNode;
		*head = newNode;
	}
	return (newNode);
}
