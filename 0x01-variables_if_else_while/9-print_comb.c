#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of single-digit numbers
 * Constraints
 * - all code must be in the main functino
 * - cannot use var of type char
 * - can only use putchar function. Others forbidden
 * - can only use putchar 4 times max in code
 * - not allowed to use variable of type char
 * - numbers should be printed in ascending order
 * - numbers must be separated by a comma(,) followed by a space.
 *
 * Return: 0 always
 */
int main(void)
{
	int k;

	k = 48;
	while (k <= 57)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		k++;
	}
	return (0);
}
