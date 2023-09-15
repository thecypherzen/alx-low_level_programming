#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed: c, i, f, and s.
 * @format: string literal specifying the format to print each argument.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i, flen;

	if (format)
	{
		va_start(arg_list, format), i = 0;
		flen = (unsigned int)strlen(format);
		while (i < flen)
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 's':
				print_str(va_arg(arg_list, char *));
				break;
			default:
				i++;
				continue;
			}
			if (i != flen - 1)
				printf(", ");
			i++;
		}
		va_end(arg_list);
	}
	printf("\n");
}

/**
 * print_str - prints a string
 * @str: the string
 * Return: void
 */
void print_str(char *str)
{
	int check;

	check = (str == NULL);
	switch (check)
	{
	case 1:
		printf("%s", "(nil)");
		break;
	default:
		printf("%s", str);
	}
}
