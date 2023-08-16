#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: 0 always
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i <= 23)
	{
		while (j <= 59)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
			j++;
		}
		i++;
		j = 0;
	}
}
