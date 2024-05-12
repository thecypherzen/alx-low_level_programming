#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array using
 * + recursive binary search
 *
 * @array: pointer to the array's first element
 * @size: number of elements in the array
 * @value: the value been searched for
 *
 * Notes
 * - can assume that array will be sorted in ascending order
 * - Every time you split the array, you have to print the new array
 *   + (or subarray) you’re searching
 * - only use one loop (while, for, do while, etc.) in order to print the array
 *
 * Return: -1 if @array is NULL or @value not found.
 *         index of element matching @value
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid = (max + min) / 2;
	int res;

	if (!array)
		return (-1);
	printf("%lu%lu%lu: ", min, mid, max);
	print_subarray(array + min, min, max);
	if (min == max)
	{
		if (array[min] != value)
			return (-1);
		return (min);
	}
	if (size == 2 && array[min] == value)
		return (min);
	size /= 2;
	if (array[mid] < value)
		min = mid + 1;
	res = advanced_binary(array + min, size, value);
	return (res < 0 ? res : (int)min + res);
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
