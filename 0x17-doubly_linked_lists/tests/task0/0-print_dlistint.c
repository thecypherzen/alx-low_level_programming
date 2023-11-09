#include "lists.h"
/**
 * print_dlisting - A function that prints all the elements of a
 * dlistint_t list.
 * @h: list head node
 * Return: number of nodes in the list
 * Description: it prints
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0, fwd;
	const dlistint_t *temp;

	if (!h)
		return (count);
	temp = h;
	fwd = !(temp->prev) ? 1 : 0;
	while (temp)
	{
		count += 1;
		printf("%d\n", temp->n);
		temp = fwd ? temp->next : temp->prev;
	}
	return (count);
}
