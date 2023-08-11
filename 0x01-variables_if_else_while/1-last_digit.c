#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * printlast - handles printing of message to stdout
 * @n: the number being checked at current instance (int)
 * @rem: the last digit derrived from @n % 10 (int)
 * @msg: the message to be printed (char)
 *
 * Return: void
 */
void printlast(int n, int rem, char *msg)
{
	printf("The last digit of %d is %d and is %s.\n", n, rem, msg);
}


/**
 * main - Entry point
 *
 * A program that assigns a random number to the variable n each time it is
 * executed and prints the last digit of the number stored in the variable.
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last == 0)
		printlast(n, last, "0");
	else if (last > 5)
		printlast(n, last, "greater than 5");
	else if (last <= 5)
		printlast(n, last, "less than 6 and not 0");

	return (0);
}
