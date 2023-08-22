#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of a string, followed by a new line
 * - If the number of characters is odd, it prints the last n characters of
 * the string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len, strt_p, i;

	if (*str == '\0')
		_putchar(10);
	else
	{
		len = _strlen(str);
		strt_p = len / 2;

		for (i = strt_p; i < len; i++)
			_putchar(*(str + i));
		_putchar(10);
	}
}
