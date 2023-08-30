#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: the array pointer
 * @size: the dimension of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum_right, sum_left;

	sum_left = sum_right = 0;

	/* sum of left diagonal */
	for (i = 0; i < size * size; i += (size + 1))
		sum_left += *(a + i);
	for (i = size - 1; i <= size * (size - 1); i += (size - 1))
		sum_right += *(a + i);
	printf("%d, %d\n", sum_left, sum_right);
}
