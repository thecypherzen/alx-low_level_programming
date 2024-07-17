#include "search_algos.h"


/**
 * jump_list - searches for a value in a singly linked list
 * + using jump search algorithm.
 *
 * NOTES:
 * - function must return a pointer to the first node where value is located
 * - can assume that value won’t appear more than once in array
 * - use the sqrt() function included in <math.h>
 * - must print a value each time it's compared
 *
 * @list: pointer to list head
 * @size:number of nodes in list
 * @value: the value searched for
 *
 * Return: ptr to matching node if value is  found or
 *	   NULL if list head is NULL or value is not found in list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left = list, *right = left;
	size_t jmpsz = floor(sqrt(size));

	if (!left)
		return (NULL);
	if (left->n == value)
		return (left);
	/* get array block to iterate over */
	while (1)
	{
		right = next_right(left, jmpsz);
		printf("Value checked at index [%lu] = [%d]\n",
		       right->index, right->n);
		if (!(right->next) || right->n >= value)
			break;
		if (!left)
			break;
		left = right;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			       left->index, right->index);
	/* iterate over matching block for value */
	while (left)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       left->index, left->n);
		if ((right && left->index == right->index) ||
		    (left->n == value))
			break;
		left = left->next;
	}
	if (left && left->n == value)
		return (left);
	return (NULL);
}


/**
 * next_right - gets the next right block in a linked list
 * + that matches the jump size
 *
 * @node: pointer to linked list head
 * @jump_size: bucket size
 *
 * Return: ptr to node at position matching jump size on success
 *	   ptr to last node in list if the next node is out of bound
 */
listint_t *next_right(listint_t *node, int jump_size)
{
	listint_t *temp;

	if (!node)
		return (NULL);
	while (jump_size && node)
	{
		temp = node, node = node->next;
		jump_size--;
	}
	return (node ? node : temp);
}
