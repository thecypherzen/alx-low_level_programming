#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; i++)
		_putchar('a' + i);
	_putchar(10);
}

/**
 * print_alphabet_x10 - calls print_alphabet 10x
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
		print_alphabet();
}
