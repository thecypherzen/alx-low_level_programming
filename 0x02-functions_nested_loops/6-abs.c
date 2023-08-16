#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the type of the argument
 *
 * Return: abs val of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
