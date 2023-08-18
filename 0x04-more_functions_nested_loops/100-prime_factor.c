#include "main.h"

/**
 * main - Write a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: 0 always
 */
int main(void)
{
	long int num, count;

	num = 612852475143;

	for (count = 3; count != num; count += 2)
	{
		while (!(num % count))
			num /= count;
	}

	/* print final value of temp (highest prime factor) */
	printf("%lu\n", num);
	return (0);
}
