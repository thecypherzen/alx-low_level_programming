#include <stdio.h>
/**
 * Program to print size of various types in c
 * main - entry point
 * return: 0 always.
 */

int main (void)
{
	/* delaring variables of various types */

	int a; char c; long l; long int j; long long int k; float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu bytes(s)\n",\
	       (unsigned long)sizeof(k));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return 0;
}
