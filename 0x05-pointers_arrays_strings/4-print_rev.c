#include "main.h"

/**
 * _str_len - returns the length of a string
 * @str: the string
 * Return: count
 */
int _str_len(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i, last_index;

	last_index = _str_len(s) - 1; /* get string length */
	for (i = last_index; i >= 0; i--)
		_putchar(*(s + i));

	_putchar(10);
}
