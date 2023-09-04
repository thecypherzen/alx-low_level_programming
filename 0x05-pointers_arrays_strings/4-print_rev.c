#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i, last_index;

	last_index = _strlen(s) - 1; /* get string length */
	for (i = last_index; i >= 0; i--)
		_putchar(*(s + i));

	_putchar(10);
}

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
