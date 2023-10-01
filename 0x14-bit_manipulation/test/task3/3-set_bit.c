#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: ptr to the number;
 * @index: the index of bit
 * Return: 1 if successful or -1 if error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
