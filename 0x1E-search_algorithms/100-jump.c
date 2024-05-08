#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using linear search
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Return: -1 if @array is NULL or @value not found.
 *         array index matching @value
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t jmp_sz, left, right, max = size - 1, i;

	if (!array)
		return (-1);
	jmp_sz = sqrt((double)size);
	left = 0, right = jmp_sz;

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       left, array[left]);
		if (right > max || value <= array[right])
			break;
		left = right, right += jmp_sz;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       left, right);
	for (i = left; i <= right; i++)
	{
		if (i > max)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
