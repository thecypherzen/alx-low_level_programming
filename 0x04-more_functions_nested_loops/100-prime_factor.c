#include "main.h"

/**
 * main - Write a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: 0 always
 */
int main(void)
{
	unsigned long int num, temp, count, sqrp;

	num = 612852475143;
	temp = num;
	sqrp = sqrt(num);

	/* if temp is even, divide by 2 until odd number is obtained */
	while (!((temp % 10) % 2))
		temp /= 2;

	/* start counting from 3 and checking for odd primes */
	for (count = 3; count <= sqrp; count += 2)
	{
		while (!(temp % count))
			temp /= count;
	}

	/* print final value of temp (highest prime factor) */
	printf("%lu\n", temp);
	return (0);
}
