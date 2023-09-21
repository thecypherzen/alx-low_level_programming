#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: ptr to list
 * Return: number of struct members.
 */
size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *currNode;
	char *str;
	unsigned int len;

	n = 0;
	if (h)
	{
		currNode = h;
		while (currNode)
		{
			str = currNode->str;
			len = 0;
			if (!str)
				printf("[%u] (nil)\n", len), n++;
			else
			{
				len = currNode->len;
				printf("[%u] %s\n", len, str), n++;
			}
			currNode = currNode->next;
		}
	}
	return (n);
}
