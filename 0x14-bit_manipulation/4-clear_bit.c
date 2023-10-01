#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: ptr to the number;
 * @index: the index of bit starting at 0
 * Return: 1 if successful or -1 if error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	_uint bin;

	if (index > 63)
		return (-1);
	bin = (*n >> index) & 1;
	if (bin)
		*n ^= (1 << index);
	else
		*n ^= (0 <<index);
	return (1);
}
