#include "main.h"

/**
 * puts2 - every other character of a string, starting with the first char
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	i = 0;
	while (*(str + i))
	{
		_putchar(str[0]);
		str += 2;
	}
	_putchar(10);
}
