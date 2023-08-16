#include <stdio.h>

/**
 * getfib - generates and prints first n fibonacci numbers.
 * @terms: number of terms to generate.
 *
 * Return: void
 */
void getfib(int terms)
{
	int start;
	int next;
	int temp;
	int count;

	start = 1;
	temp = 2;
	count = 3;

	printf("%d, %d, ", start, temp);

	while (count <= terms)
	{
		next = start + temp;
		start = temp;
		temp = next;
		if (count != terms)
			printf("%d, ", next);
		else
			printf("%d\n", next);
		count++;
	}
}
/**
 * main - prints first n fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int fib_terms;

	fib_terms = 50;

	getfib(fib_terms);
	return (0);
}
