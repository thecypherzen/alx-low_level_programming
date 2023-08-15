#include "main.h"

/**
 * main - Entry point
 *
 * A program that prints _putchar, followed by a new line.
 *
 * Return: 0 always
 */
int main(void)
{
	char *s = "_putchar";
	int len = sizeof(s) - 1;
	int i;

	for (i = 0; i <= len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
