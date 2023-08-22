#include "main.h"

/**
 * print_array - prints n elements of an array of ints followed
 * by a new line
 * @a: pointer to array
 * @n: the number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;


	if (n < 0)
		n = 0;

	if (n == 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", *(a + i));
			else
				printf("%d, ", *(a + i));
		}
	}
}
