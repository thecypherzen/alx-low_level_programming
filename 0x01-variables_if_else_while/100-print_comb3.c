#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of two digit numbers
 * **** Constraints *****
 * - Numbers must be separated by a comma(,), followed by a space
 * - The two digits must be different
 * - 01 and 10 are considered the same combination of the two digits 0 and 1
 * - Print only the smallest combination of two digits
 * - Numbers should be printed in ascending order, with two digits
 * - Can only use putchar function. Others forbidden.
 * - Can only use putchar five times maximum in your code
 * - Not allowed to use any variable of type char
 * - All code should be in main function
 *
 * Return: 0 always
 */
int main(void)
{
	int j;
	int k;

	for (j = 48; j <= 57; j++)
	{
		for (k = 48; k <= 57; k++)
		{
			if (j == k || j > k)
				continue;
			else
			{
				putchar(j);
				putchar(k);
				if (j != 56)
				{
					putchar(44); /* ascii code for comma */
					putchar(32); /* ascii code for space */
				}
				else
					putchar(10); /* ascii for new line */
			}
		}
	}
	return (0);
}
