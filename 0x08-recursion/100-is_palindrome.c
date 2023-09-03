#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if true, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int max, i, j;

	max = strlen(s) / 2, i = 0, j = strlen(s) - 1;
	if (strlen(s) <= 1)
		return (1);
	return (palcheck(s, i, j, max));
}
/**
 * palcheck - does the actual checking for palindrome
 * @s: the string
 * @i: index of left char
 * @j: index of right char
 * @max: maximum iterations
 * Return: 1 if chars at pos i & j are equal. 0 otherwise.
 */
int palcheck(char *s, int i, int j, int max)
{
	if (max >= 1)
	{
		if (s[i] != s[j])
			return (0);
		i++, j--, max--;
		return (palcheck(s, i, j, max));
	}
	return (1);
}
