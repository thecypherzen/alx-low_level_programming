#include "function_pointers.h"

/**
 * int_index - Searches for ain integer in an array.
 * @array: array ptr
 * @size: array size
 * @cmp: compare fxn ptr
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size > 0 && array && cmp)
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]))
				return (count);
		}
	}
	return (-1);
}
