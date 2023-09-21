#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: ptr to list
 * Return: number of struct elements.
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *currNode;

	n = 0;
	if (h)
	{
		currNode = h;
		while (currNode)
			n++, currNode = currNode->next;
	}
	return (n);
}
