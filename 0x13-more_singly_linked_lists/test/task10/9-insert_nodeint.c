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
	if (!head || !(*head) || !newNode)
		return (NULL);

	list_len = listint_len(*head);
	if (idx > list_len - 1)
		return (NULL);

	oldNode = get_nodeint_at_index(*head, idx - 1);
	newNode->n = n;
	newNode->next = oldNode->next;
	oldNode->next = newNode;
	return (newNode);
}
