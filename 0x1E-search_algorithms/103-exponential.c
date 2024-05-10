#include "search_algos.h"
#define min(x, y) ((x) < (y) ? (x) : (y))

/**
 * exponential_search - searches for a value in an array using the
 * + exponential search algorithm
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Notes
 * - must return the first index where value is located
 * - assume that array will be sorted in ascending order
 * - must use powers of 2 as exponential ranges to search in array
 * - Every time you compare a value in the array to the value you are
 *   + searching for, you have to print this value.
 * - Once you’ve found the good range, you need to use a binary search:
 *   + Every time you split the array, you have to print the new array
 *   + (or subarray) you’re searching in
 *
 * Return: -1 if @array is NULL or @value not found.
 *         array index matching @value
 **/
int exponential_search(int *array, size_t size, int value)
{
	int i = 0, low, high, idx, max = size - 1;

	if (!array)
		return (-1);
	if (array[i] == value)
		return (i);
	i = 1;
	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       i, array[i]);
		i *= 2;
	}
	low = i / 2, high = min(i, max);
	if (array[low] == value)
		return (i);
	printf("Value found between indexes [%d] and [%d]\n",
	       low, high);
	idx = binary_search(array + low, (high - low + 1), value);
	return (idx < 0 ? idx : (idx + low));
}


/**
 * binary_search - searches for a value in an array using binary search
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Return: -1 if @array is NULL or @value not found.
 *         index of element matching @value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid;

	if (!array)
		return (-1);
	while (min < max)
	{
		print_subarray(array, min, max);
		mid = ((max - min) / 2) + min;
		if (array[mid] == value)
			return (mid);
		size /= 2;
		if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}
	print_subarray(array, min, max);
	if (array[min] == value)
		return (min);
	return (-1);
}

/**
 * print_subarray - prints out array slices
 *
 * @array: pointer to array's first element
 * @start: index to start printing from
 * @stop: index to stop printng at
 */
void print_subarray(int *array, size_t start, size_t stop)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= stop; i++)
	{
		printf("%d%s", array[i], i != stop ? ", " : "\n");
	}
}
