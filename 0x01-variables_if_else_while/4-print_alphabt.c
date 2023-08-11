#include <stdio.h>

/**
 * main - Entry point to program
 *
 * a program that prints the alphabet in lowercase, followed by a new line.
 * Constraints
 * - should print all letters except q and e
 * - can only use putchar. Other functions like printf forbidden
 * - all code must be inside main
 * - can only use putchar 2 times in code
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
			continue;
		else
			putchar(i);
		if (i == 122)
			putchar('\n');
	}
	return (0);
}
