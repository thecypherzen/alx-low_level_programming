#include "main.h"

/**
 * punct - used to add puctuations
 * @row: current iteration of row
 * @col: currentn iteration fo col
 *
 * Return: void
 */
void punct(int row, int col)
{
	int cur;
	int nextm;

	cur = col;
	nextm = row * (cur + 1);
	if (col != 9)
	{
		_putchar(',');
		_putchar(32); /* space */
		if (nextm < 10)
			_putchar(32);
	}
}

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

			mult = row * col;
			if (mult < 10)
			{
				_putchar('0' + mult);
				punct(row, col);
			}
			else
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
				punct(row, col);
			}
			col++;
		}
		_putchar('\n');
		row++;
		col = 0;
	}
}
