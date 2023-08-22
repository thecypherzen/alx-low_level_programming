#include "main.h"

/**
 * puts2 - every other character of a string, starting with the first char
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
