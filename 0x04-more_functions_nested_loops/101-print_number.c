#include "main.h"

/**
 * print_u - prints int in units ---- 1
 * @x: the integer to print
 * Return: void
 */
void print_u(int x)
{
	_putchar('0' + x);
}

/**
 * print_ts - prints int in 10s ---- 2
 * @y: the integer to print
 * Return: void
 */
void print_ts(int y)
{
	print_u(y / 10);
	print_u(y % 10);
}

/**
 * print_h - prints a number in hundreds --- 3
 * @a: the number to print
 * Return: void
 */
void print_h(int a)
{
	print_u(a / 100);
	print_ts(a % 100);
}

/**
 * print_th - prints a number in thousands --- 4
 * @n: the number ot print
 * Return: void
 */
void print_th(int n)
{
	print_ts(n / 100);
	print_ts(n % 100);
}

/**
 * print_number - prints an integer  --- 5
 * - can only use the _putchar function
 * - cannot use long
 * - arrays, pointers not allowed
 * - no hardcoding
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(n * (-1));
	}
	if (n >= 0 && n < 10)
		print_u(n);
	if (n >= 10 && n < 100)
		print_ts(n);
	if (n >= 100 && n < 1000)
		print_h(n);
	if (n >= 1000 && n < 10000)
		print_th(n);
}
