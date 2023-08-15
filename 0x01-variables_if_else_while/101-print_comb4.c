#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of three digit numbers
 * **** Constraints *****
 * - Numbers must be separated by a comma(,), followed by a space
 * - The three digits must be different
 * - 012, 120, 102, 021, 201, 210 are considered the same combination of the
 *   three digits 0, 1 and 2
 * - Print only the smallest combination of three digits
 * - Numbers should be printed in ascending order, with two digits
 * - Can only use putchar function. Others forbidden.
 * - Can only use putchar six times maximum in your code
 * - Not allowed to use any variable of type char
 * - All code should be in main function
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i == j || j == k || i == k || i > j || j > k)
					continue;
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(44); /* ascii comma */
						putchar(32); /* ascii space */
					}
					else
						putchar(10); /* new line */
				}
			}
		}
	}
	return (0);
}
