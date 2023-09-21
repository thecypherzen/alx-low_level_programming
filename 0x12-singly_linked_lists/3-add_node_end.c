#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: ptr to list head
 * @str: string member of struct to be duplicated.
 * Return: address of new node on success. NULL if fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode || !head)
		return (NULL);

	newNode->str = str ? strdup(str) : NULL;
	newNode->len = str ? strlen(str) : 0;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}
	tempNode = *head;
	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
	return (newNode);
}
