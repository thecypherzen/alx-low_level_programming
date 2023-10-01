#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number;
 * Return: void
 */
void print_binary(unsigned long int n)
{
	_ulint temp, bin, i;

	if (!n)
		_putchar(48);
	else
	{
		temp = n, i = 0;
		while (temp)
			temp >>= 1, i++;
		while (i)
		{
			bin = (n >> (i - 1)) & 1;
			_putchar(48 + bin);
			i--;
		}
	}
}
