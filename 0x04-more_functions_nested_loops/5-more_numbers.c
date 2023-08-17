#include "main.h"
/**
 * sendchar - sends an int value to stdout
 * Return: void
 */
void sendchar(int n)
{
	_putchar(n);
}

/**
 * print-14 - prints numbers from 0 - 14.
 * Return: void
 */
void print_14(void)
{
	int i; int fd; int ld;

	i = 0;
	while (i <= 14)
	{
		fd = i / 10;
		ld = i % 10;
		if (fd > 0)
		{
			sendchar('0' + fd);
			sendchar('0' + ld);
		}
		else
			sendchar('0' + ld);
		i++;
	}
}
/**
 * print_most_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * - only use _putchar three times.
 * Return: void
 */
void more_numbers(void)
{
	int count;

	count = 1;

	while (count < 10)
	{
		print_14();
		_putchar('\n');
		count++;
	}
}
