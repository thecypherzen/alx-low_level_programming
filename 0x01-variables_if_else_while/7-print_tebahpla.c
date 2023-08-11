#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints the alphabet in lowercase in reverse order, followed
 * by a new line.
 * Conditions
 * - can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * - all code must be in the main function
 * - can only use putchar twice in code
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar (i);
		if (i == 97)
			putchar(10);
		i--;
	}
	return (0);
}
