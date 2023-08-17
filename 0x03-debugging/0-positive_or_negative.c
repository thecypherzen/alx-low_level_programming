#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 *
 * A function that assigns a random number to the variable n each time it is
 * executed. Prints whether the number stored in the variable n is positive
 * or negative.
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
