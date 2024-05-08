#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using the
 * + interpolation algorithm
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Return: -1 if @array is NULL or @value not found.
 *         array index matching @value
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, a_start = 0, a_end = size - 1, idx;

	if (!array)
		return (-1);
	while (1)
	{
		low = a_start, high = a_end;
		idx = low + (((double)(high - low) / array[high] - array[low])
			     * (value - array[low]));
		if (idx < low || idx > high)
		{
			printf("Value checked array[%lu] is out of range\n",
				idx);
		}
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return ((int)idx);
		if (array[idx] < value)
			a_start = idx + 1;
		else
			a_end = idx - 1;
	}
	return (-1);
}
