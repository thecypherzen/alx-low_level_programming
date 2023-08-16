#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: limit of listing
 *
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 *
 * Return: void
 */
void print_to_98(int n)
{
	int start;

	if (n < 98)
	{
		for (start = n; start < 98; start++)
			printf("%d, ", start);
	}
	else if (n > 98)
	{
		for (start = n; start > 98; start--)
			printf("%d, ", start);
	}
	printf("%d\n", 98);
}
