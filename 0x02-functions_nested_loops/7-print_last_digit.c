#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: the number to print last digit
 *
 * Return: 0 always
 */
int print_last_digit(int num)
{
	int lastd;

	lastd = num % 10;
	if (lastd < 0)
		lastd *= -1;
	_putchar('0' + lastd);
	return (lastd);
}
