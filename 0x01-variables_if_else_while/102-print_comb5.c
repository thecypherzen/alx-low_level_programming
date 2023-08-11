#include <stdio.h>

/**
 * printout - Function that handles the printing of chars to stdout
 * @a: current iteration of i
 * @b: current iteration of j
 * @c: current iteration of k
 * @d: current iteration of l
 *
 * Return: void
 */
void printout(int a, int b, int c, int d)
{
	putchar(a);
	putchar(b);
	putchar(32);
	putchar(c);
	putchar(d);
	if (a == 57 && b == 56 && c == 57 && d == 57)
		putchar(10); /* new line char */
	else
	{
		putchar(44); /* comma */
		putchar(32); /* space */
	}
}

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of two two-digit numbers
 * **** Constraints *****
 * - The numbers should range from 0 to 99
 * - The two numbers should be separated by a space
 * - All numbers should be printed with two digits. 1 should be printed as 01
 * - The combination of numbers must be separated by comma, followed by a space
 * - The combinations of numbers should be printed in ascending order
 * - 00 01 and 01 00 are considered as the same combination of
 * * the numbers 0 and 1
 * - Can only use putchar function. Others forbidden.
 * - Can only use putchar eight times maximum in your code
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
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i > k || (i == k && j == l) ||
					    (i == k && j > l))
						continue;
					else
						printout(i, j, k, l);
				}

			}
		}
	}
	return (0);
}
