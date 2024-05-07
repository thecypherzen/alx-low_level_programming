#include "search_algos.h"

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
void print_subarray(int *array, size_t start, size_t stop){
	size_t i;

	printf("[%lu], [%lu]: ", start, stop);
	printf("Searching in array:");
	for (i = start; i <= stop; i++)
	{
		printf("%d%c", array[i], i != stop ? ',' : '\n');
	}
}
