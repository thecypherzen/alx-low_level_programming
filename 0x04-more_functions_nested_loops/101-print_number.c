#include "main.h"

/**
 * printchar - prints a character to sdout
 * @x: the integer ascii value of the character
 * Return: void
 */
void printchar(int x)
{
	_putchar('0' + x);
}

/**
 * print_number - prints an integer  --------------> 5
 * - can only use the _putchar function
 * - cannot use long
 * - arrays, pointers not allowed
 * - no hardcoding
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int fd, div, ld, neg;

	if (n < 0)
	{
		neg = (n * (-1));
		_putchar('-');
		print_number(neg);
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		div = 10;
		fd = n / div; /* first digit */
		ld = n % div; /* last digit */

		if (fd == 0 && ld <= 9)
			printchar(ld);
		else if (fd <= 9 && ld <= 9)
		{
			printchar(fd);
			printchar(ld);
		}
		else
		{
			while (fd > 9)
			{
				div *= 10;
				fd = n / div;
			}
			while (div > 1)
			{
				printchar(fd);
				fd = (n % div) / (div / 10);
				div /= 10;
			}
			printchar(fd);
		}
	}
}
