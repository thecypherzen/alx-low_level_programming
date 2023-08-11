#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * Constraints
 * - can only use putchar in code. Other functions forbidden
 * - all code must be in the main function
 * - can only use putchar 3 times in code
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
		if (n == 102)
			putchar('\n');
	}
	return (0);
}
