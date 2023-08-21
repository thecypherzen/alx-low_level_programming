#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int pointer
 * @b: second int pointer
 * Return: void always
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
