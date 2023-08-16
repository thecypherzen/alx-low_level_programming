#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;

	row = 0;
	col = 0;

	while (col <= 9)
	{
		while (row <= 9)
		{
			int mult;

			mult = row * col;
			if (mult < 10)
			{
				_putchar('0' + mult);
				if (row != 9)
				{
					_putchar(',');
					_putchar(32); /* space */
					_putchar(32);
				}
			}
			else
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
				if (row != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}
			row++;
		}
		_putchar('\n');
		col++;
		row = 0;
	}
}
