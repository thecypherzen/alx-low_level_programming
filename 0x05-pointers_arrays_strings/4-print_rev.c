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
	int i, strlen;

	strlen = _str_len(s); /* get string length */
	for (i = strlen; i >= 0; i--)
		_putchar(*(s + i));

	_putchar(10);
}
