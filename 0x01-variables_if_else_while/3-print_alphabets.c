#include <stdio.h>

/**
 * main - Entry point to program
 *
 * a program that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Constraints
 * - can only use putchar. Other functions like printf forbidden
 * - all code must be inside main
 * - can only use putchar 3 times in code
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
		if (i == 90)
			putchar('\n');
	}
	return (0);
}
