#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the int value to check if it reps a character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	int i = c;

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}
