#include "search_algos.h"

/**
 * linear_search - searches for an element using linear search
 * + algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value: the value searched for
 *
 * Return: -1 if value is not found
 *	   first index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
