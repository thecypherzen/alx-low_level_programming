#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: ptr to a string of 0 and 1 chars
 * Return: the converted num or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1 or
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	_uint ival = 0, pow = 0;

	if (!b)
		return (ival);
	while (*b)
	{
		if (*b < 48 || *b > 57)
			return (ival);
		pow++, b++;
	}
	b -= pow, --pow;
	while (*b)
	{
		if (*b != 48)
			ival += ((*b - 48) * _pow(2, pow));
		b++, pow--;
	}
	return (ival);
}
/**
 * _pow - raises a number to a certain power
 * @num: number
 * @pow: the exponent
 * Return: the result of num to power of pow
 */
_uint _pow(_uint num, _uint pow)
{
	_uint res = 1;

	if (!pow)
		return (1);
	if (pow ==  1)
		return (num);
	while (pow)
		res *= num, pow--;
	return (res);
}
