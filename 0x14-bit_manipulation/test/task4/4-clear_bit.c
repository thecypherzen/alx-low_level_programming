#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: ptr to the number;
 * @index: the index of bit starting at 0
 * Return: 1 if successful or -1 if error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (*n == 0)
		return (1);
	*n ^= (1 << index);
	return (1);
}
