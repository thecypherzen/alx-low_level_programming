#include "main.h"

/**
 * array_range - creates an array of integers. The array created  contains
 * values from min to max (both included), ordered from min to max.
 * @min: minimum
 * @max: maximum
 * Return: ptr to new string on success
 *         NULL if min > max or malloc fail
 */
int *array_range(int min, int max)
{
	int *ptr, n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (!ptr)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = min + i;
	return (ptr);
}
