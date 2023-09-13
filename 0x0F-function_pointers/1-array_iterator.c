#include "function_pointers.h"

/**
 * array_iterator - Runs a fxn passed as a param on each element of an array
 * @array: array ptr
 * @size: array size
 * @action: function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int j;

	j = 0;
	for (i = 0; i < size; i++)
		action(array[j]), j++;
}
