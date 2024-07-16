#include "search_algos.h"

/**
 * jump_search - searches for an element using binary search
 * + algorithm
 * NOTES:
 * - must return the first index where value is located
 * - can assume that array will be sorted in ascending order
 * - must use the square root of the size of the array as the jump step
 * - must print each value when it's compared
 *
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value: the value searched for
 *
 * Return: -1 if value is not found or array ptr is NULL
 *	   first index where value is found
 */
int jump_search(int *array, size_t size, int value)
{
	int jmpsz = floor(sqrt(size));
	int left = 0, right = jmpsz, max = (int)(size - 1);

	if (!array || !size)
		return (-1);
	while (1)
	{
		/* jump throug buckets */
		if (array[left] < value)
		{
			printf("Value checked array[%d] = [%d]\n",
			       left, array[left]);
			if (right > max || array[right] >= value)
				break;
			left = right, right += jmpsz;

		}
		else
			break;
	}
	/* perform linear search in found block */
	printf("Value found between indexes [%d] and [%d]\n",
	       left, right);

	if (right > max)
		right = max;

	while (left <= right)
	{
		printf("Value checked array[%d] = [%d]\n",
		       left, array[left]);
		if (array[left] == value)
			return (left);
		left += 1;
	}
	return (-1);
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
