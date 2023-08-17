#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar('0' + num);
	_putchar(10);
}
