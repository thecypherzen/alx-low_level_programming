#include "search_algos.h"

/**
 * linear_skip - searches for a value in a linked list using the
 * + linear skip list search algorithm.
 *
 * @list: pointer to the head of the list to search
 * @value: the value been searched for
 *
 * Notes
 * - A node of the express lane is placed on every index which is a multiple of
 *   + the square root of the size of the list
 * - can assume that list will be sorted in ascending order
 * - Every time you compare a value in the list to the value you are
 *   + searching, you have to print this value
 *
 * Return: NULL if @list is NULL or @value not found.
 *         pointer to node containing @value otherwise.
 **/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left, *right;

	if (!list)
		return (list);
	left = list, right = list->express;
	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       right->index, right->n);
		if (right->n >= value)
			break;
		left = right;
		if (right->express)
			right = right->express;
		else
		{
			while (right->next)
				right = right->next;
			break;
		}
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
	return (NULL);
}
