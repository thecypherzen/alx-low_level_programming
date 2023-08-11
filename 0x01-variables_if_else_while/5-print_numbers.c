#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Constraints
 * - all code must be in the main functino
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			putchar('\n');
	}
	return (0);
}
