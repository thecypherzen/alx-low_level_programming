#include "main.h"

/**
 * leet - encodes a string into 1337
 * A(a) = 4, E(e) = 3, O(o) = 0, T(t) = 7, L(l) = 1
 * @str: the string
 * Return: pointer to modified string
 */
char *leet(char *str)
{
	char *temp, *convr;
	int i, ind;

	temp = str;
	convr = "43071";

	for (i = 0; *temp != '\0'; i++)
	{
		ind = _index_of(*temp);
		if (ind >= 0)
			*temp = *(convr + ind);
		temp++;
	}

	str = temp - i;
	return (str);
}

/**
 * _index_of - get index of a char in code string
 * @c: the char to check
 * Return: index of char in code string
 */
int _index_of(char c)
{
	char *codes;
	int i;

	codes = "AEOTL";
	i = 0;
	while (*codes != '\0')
	{
		if (c == *codes || c == (*codes + 32))
			return (i);
		codes++;
		i++;
	}
	return (-1);
}
