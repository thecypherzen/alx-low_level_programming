#include "main.h"

/**
 * print_sign - prints the sign of n.
 * @n: the value to be checked.
 *
 * Return: 1 if n > 0
 *         0 if n = 0
 *        -1 otherwise
 */
int print_sign(int n)
{
	int num;

	num = n;
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
