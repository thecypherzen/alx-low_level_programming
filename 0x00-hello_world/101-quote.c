#include <unistd.h>
#include <stdio.h>

/*
 * A C program that prints exactly:
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error
 *
 * main - entry point
 *
 * return: 1 always
 */

int main (int)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, sizeof(quote) - 1);
	return 1;
}
