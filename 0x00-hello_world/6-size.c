#include <stdio.h>
/**
 * main - Entry point
 *
 * A program to print size of various types in c
 *
 * Return: 0 always.
 */

int main(void)
{
	/* delaring variables of various types */
	char i;
	int j;
	long int k;
	long long int l;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
