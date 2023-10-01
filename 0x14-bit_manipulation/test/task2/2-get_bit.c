#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number;
 * @index: the index of bit
 * Return: bit at index or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin;

	if (index > 63)
		return (-1);
	bin = (n >> index) & 1;
	return (bin);
}
