#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all arguments
 * @n: number of arguments passed.
 * Return: sum of arguments on success, 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;
	if (n)
	{
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
	}
	return (sum);
}
