#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Return: -1 if @array is NULL or @value not found.
 *         array index matching @value
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
