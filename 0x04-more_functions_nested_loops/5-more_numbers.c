#include "main.h"
/**
 * print_nums - a function tha tprints numbers 0 - 14 once.
 * - uses the _putchar three times only.
 * Return: void
 */
void print_nums(void)
{
	int i, int fst, int lst; /* fst = first digit, lst = last digit */

	i = 0;
	while (i <= 14)
	{
		fst = i / 10;
		lst = i % 10;

		if (i < 10)
			_putchar('0' + i);
		else
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
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
		print_nums();
		_putchar('\n');
		count++;
	}
}
