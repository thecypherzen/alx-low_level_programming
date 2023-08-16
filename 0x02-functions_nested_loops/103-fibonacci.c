#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued fibonacci
 * terms <= 4 000 000
 *
 * Return: always 0
 */
int main(void)
{
	long int start;
	long int next;
	long int temp;
	int cur_term;
	long int sum;

	start = 1;
	next = 2;
	cur_term = 2;
	sum = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		temp = start + next;
		start = next;
		next = temp;
		cur_term++;
	}
	printf("%lu\n", sum);
	return (0);
}
