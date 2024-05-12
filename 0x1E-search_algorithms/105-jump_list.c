#include "search_algos.h"

/**
 * jump_list - searches for a value in a linked list using the
 * + jump search algorithm.
 *
 * @list: pointer to the head of the list to search
 * @size: number of nodes in list
 * @value: the value been searched for
 *
 * Notes
 * - can assume that list will be sorted in ascending order
 * - have to use the square root of the size of the list as the jump step
 * - Every time you compare a value in the list to the value you are searching,
 *   + you have to print this value
 *
 * Return: -1 if @list is NULL or @value not found.
 *         pointer to node containing @value otherwise.
 **/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jmp_sz, right_idx;
	listint_t *left = NULL, *right = NULL;

	if (!list)
		return (NULL);
	jmp_sz = sqrt((double)size);
	left = right = list, right_idx = jmp_sz;

	if (left->n == value)
		return (left);
	while (1)
	{
		/*printf("  left: %lu[%d] | jmp_sz: %lu | right_dx: %lu\n",*/
		/* left->index, left->n, jmp_sz, right_idx);*/
		while (right->next && right->index < right_idx)
			right = right->next;
		printf("Value checked at index [%lu] = [%d]\n",
		       right->index, right->n);
		if (!right->next || right->n >= value)
			break;
		left = right, right_idx += jmp_sz;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       left->index, right->index);
	while (left)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (left);
}
