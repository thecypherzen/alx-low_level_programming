#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t jmp_sz, left, right, max = size - 1, i;

	if (!array)
		return (-1);
	jmp_sz = sqrt((double)size);
	left = 0, right = jmp_sz;

	while(1)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       left, array[left]);
		if (right > max || value <= array[right])
			break;
		left = right, right += jmp_sz;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       left, right);
	for (i = left; i <= right; i++)
	{
		if (i > max)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
