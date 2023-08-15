#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; i++)
		_putchar('a' + i);
	_putchar('\n');
}
