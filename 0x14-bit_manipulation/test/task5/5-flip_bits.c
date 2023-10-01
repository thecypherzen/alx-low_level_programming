#include "main.h"

/**
 * flip_bits - checks the number of bits you would need to flip to
 * get from one number to another.
 * @n: first number;
 * @m: second number
 * Return: 1 if successful or -1 if error occurs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	_uint bits, bm, bn, i;

	bits = i = 0;

	while (i++ <= 63)
	{
		bm = (m >> i) & 1, bn = (n >> i) & 1;
		if (bm != bn)
			bits++;
	}
	return (bits);
}
