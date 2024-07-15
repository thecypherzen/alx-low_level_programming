#include "search_algos.h"

/**
 * binary_search - searches for an element using binary search
 * + algorithm
 * NOTES:
 * - can assume that array will be sorted in ascending order
 * - can assume that value won’t appear more than once in array
 *
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value: the value searched for
 *
 * Return: -1 if value is not found or array ptr is NULL
 *	   first index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	int ret = -1;
	int left = 0, right = size - 1, max = size - 1, mid;

	if (!array || !size)
		return (ret);
	while (1)
	{
		mid = (left + right) / 2;
		if (mid > max)
			break;
		binary_print(array, left, right);
		if (array[mid] == value)
			return ((int)mid);
		if (left == right)
			break;
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (ret);
}




/**
 * binary_print - prints binary search sub-arrays
 *
 * @array: pointer to first element in array
 * @start: starting index in array to print
 * @stop: stopping indes in array to print
 */
void binary_print(int *array, int start, int stop)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= stop; i++)
	{
		printf("%d%s", array[i],
		       i >= stop ? "\n" : ", ");
	}
}
