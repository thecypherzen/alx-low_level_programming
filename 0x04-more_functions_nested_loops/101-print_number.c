#include "main.h"

/**
 * print_number - prints an integer  --------------> 5
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int fd, div, num;

	if (n < 0)
	{
		num = n * (-1);
		_putchar('-');
	}
	else
		num = n;

	div = 1;
	fd = num / div; /* first digit */
	while (fd > 9)
	{
		div *= 10;
		fd = num / div;
	}
	while (div >= 1)
	{
		fd = ((num / div) % 10);
		div /= 10;
		_putchar('0' + fd);
	}
}
