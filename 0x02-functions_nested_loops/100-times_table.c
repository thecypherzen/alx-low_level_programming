#include "main.h"

/**
 * punct - used to add puctuations
 * @num: limit of iterations
 * @row: current iteration of row
 * @col: currentn iteration fo col
 *
 * Return: void
 */
void punct(int num, int row, int col)
{
	int cur;
	int nextm;

	cur = col;
	nextm = row * (cur + 1);
	if (col != num)
	{
		_putchar(',');
		_putchar(32); /* space */
		if (nextm < 10)
		{
			_putchar(32);
			_putchar(32);
		}
		else if(nextm >= 10 && nextm < 100)
			_putchar(32);
	}
}
/**
 * print_three_digits - prints three digits of an
 * integer using _putchar
 * @mult: integer to be printed
 *
 * Return: void
 */
void print_three_digits(int mult)
{
	/* split mult into individual digits, f, s and last */
	int fd;
	int sd;
	int ld;

	fd = mult / 100;
	sd = (mult % 100) / 10;
	ld = (mult % 100) % 10;

	_putchar ('0' + fd);
	_putchar ('0' + sd);
	_putchar ('0' + ld);
}

/**
 * generate_table - generates times table up n x n
 * @num: the limit to stop generating
 *
 * Return: void
 */
void generate_table(int num)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row <= num)
	{
		while (col <= num)
		{
			int mult;

			mult = row * col;
			if (mult < 10)
			{
				_putchar('0' + mult);
				punct(num, row, col);
			}
			else if (mult >= 10 && mult < 100)
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
				punct(num, row, col);
			}
			else if (mult >= 100 && mult < 1000)
			{
				print_three_digits(mult);
				punct(num, row, col);
			}
			col++;
		}
		_putchar('\n');
		row++;
		col = 0;
	}
}

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: the limit to generate
 *
 * Return: void
 */
void print_times_table(int n)
{
	int num;

	num = n;
	if (num < 0 || num > 15)
		return;
	generate_table(num);
}
