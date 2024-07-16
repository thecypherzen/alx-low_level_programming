#include "search_algos.h"

/**
 * interpolation_search - searches for an element using interplation
 * + search algorithm
 *
 * NOTES:
 * - must return the first index where value is located
 * - can assume that array will be sorted in ascending order
 * - must print each value when it's compared
 *
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value: the value searched for
 *
 * Return: -1 if value is not found or array ptr is NULL
 *	   first index where value is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);
	while (1)
	{
		pos = low + (((double)(value - array[low]) /
			      (array[high] - array[low])) *
			     (high - low));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n",
		       pos, array[pos]);

		if (high == low)
			break;
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (array[low] == value)
		return ((int)low);
	return (-1);
}
