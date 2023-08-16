#include <stdio.h>

/**
 * sum_of_factors - sums up the factors of 3 or five below a specified integer
 * @num: the specified integer
 *
 * Return: the sum of factors
 */
int sum_of_factors(int num)
{
	int sum;
	int count;

	count = 1;
	sum = 0;

	while (count < num)
	{
		if (count % 3 == 0 || count % 5 == 0)
			sum += count;
		count++;
	}
	return (sum);
}

/**
 * main - gets sum of factors of 3 or 5 below a number and prints output.
 *
 * Return: 0 always
 */
int main(void)
{
	int factsum;
	int num = 1024;

	factsum = sum_of_factors(num);

	printf("%d\n", factsum);

	return (0);
}
