#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints the alphabet in lowercase, followed by a new line.
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

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		if (i == 122)
			putchar(10);
	}
	return (0);
}
