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

	while (row <= 9)
	{
		while (col <= 9)
		{
			int mult;
			int nextm;
			int cur;

			mult = row * col;
			cur = col;
			nextm = row * (cur + 1);

			if (mult < 10)
			{
				_putchar('0' + mult);
				if (col != 9 )
				{
					_putchar(',');
					_putchar(32); /* space */
					if (nextm < 10)
						_putchar(32);
				}
			}
			else
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
				if (col != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}
			col++;
		}
		_putchar('\n');
		row++;
		col = 0;
	}
}
