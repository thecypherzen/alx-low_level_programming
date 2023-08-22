#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = _strlen(s) - 1; /* get string length */
	for (i = 0; i <= len; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = temp;
		len--;
	}
}

/**
 * _strlen - returns the length of a string
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
