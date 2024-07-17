#include "search_algos.h"


size_t _get_max_id(skiplist_t *right)
{
	if (right->express)
		return (right->index);
	while (right->next)
		right = right->next;
	return (right->index);
}


/**
 * linear_skip - searches for a value in a singly linked list
 * + using a skip list (express lane).
 *
 * NOTES:
 * - function must return a pointer to the first node where value is located
 * - can assume that list will be sorted in ascending order
 * - use the sqrt() function included in <math.h>
 * - must print a value each time it's compared
 *
 * @list: pointer to head of skip list
 * @value: the value searched for
 *
 * Return: ptr to matching node if value is  found or
 *	   NULL if list head is NULL or value is not found in list
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left = list, *right = left;
	size_t max;

	if (!left)
		return (NULL);
	if (left->n == value)
		return (left);
	/* get array block to iterate over */
	while (right->express)
	{
		right = right->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       right->index, right->n);
		if (right->n >= value)
			break;
		left = right;
	}
	max = _get_max_id(right);
	printf("Value found between indexes [%lu] and [%lu]\n",
			       left->index, max);
	/* iterate over matching block for value */
	while (left && left->index <= max)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}
