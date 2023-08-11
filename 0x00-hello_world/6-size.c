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

	int a;
	char c;
	long l;
	long long k;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %llu bytes(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
