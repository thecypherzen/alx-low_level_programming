#include "main.h"

/**
 * puts2 - every other character of a string, starting with the first char
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		if (*(str + 1) != '\0' && *(str + 2) != '\0')
			str += 2;
		else
		{
			_putchar(10);
			return;
		}
	}
}
