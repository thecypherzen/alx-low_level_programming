#include <unistd.h>

/**
 * main - Entry point
 *
 * A C program that prints exactly:
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error
 *
 * Return: 1 always
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10\
-19\n";

	write(2, quote, sizeof(quote) - 1);
	return (1);
}
