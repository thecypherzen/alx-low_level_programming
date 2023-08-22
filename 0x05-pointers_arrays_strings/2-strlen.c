#include "main.h"

/**
 * _strlen - eturns the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
