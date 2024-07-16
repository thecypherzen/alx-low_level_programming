#include "search_algos.h"

/**
 * advanced_binary - searches for an element using advanced binary search
 * + algorithm. Ensures that the index of first occurence is always
 * + returned if multiple entries of @value are in array
 *
 * NOTES:
 * - can assume that array will be sorted in ascending order
 * - can assume that value won’t appear more than once in array
 * - must print array on each split
 * - must use recursion
 * - can use a loop only once
 *
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value: the value searched for
 *
 * Return: -1 if value is not found or array ptr is NULL
 *	   first index where value is found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index = 0;

	recursive_binary(array, size, value, &index);
	return (index);
}


/**
 * recursive_binary - a helper function for advanced_binary
 *
 * @array: pointer to first element in array
 * @size: elements in array
 * @value: the value to search for
 * @index: index in array where value is formed
 *
 * return: void
 */
void recursive_binary(int *array, size_t size, int value, int *index)
{
	int left = 0, right = size - 1, mid;

	/* validate pointer */
	if (!array || !size)
		return;
	mid = (left + right) / 2;
	if (mid > (int)(size - 1))
		return;

	binary_print(array, left, right);
	/* base case definition */
	if (left == right)
	{
		if (array[left] != value)
			*index = -1;
		return;
	}
	if (array[mid] <= value)
	{
		if (array[mid] == value)
		{
			if (size == 2)
				return;
			right = mid;
			size = (size_t)(right - left + 1);
		}
		else
			left = mid + 1, *index += left;
	}
	else
		right = mid - 1;
	size = (size_t)(right - left + 1);
	recursive_binary(array + left, size, value, index);
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
