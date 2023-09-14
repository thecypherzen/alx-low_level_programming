#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to separate numbers.
 * @n: number of arguments passed.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *tmp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, char *);
		printf("%s", tmp ? tmp : "(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
