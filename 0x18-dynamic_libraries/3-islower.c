#include "main.h"

/**
 * _islower - checks for lowercase charater
 * @c: the int value to check if it reps a character
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
