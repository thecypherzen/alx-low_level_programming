#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = n - 1;

	while (i >= n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = temp;
		i--;
	}
}
