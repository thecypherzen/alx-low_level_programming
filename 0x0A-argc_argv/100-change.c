#include "main.h"

/**
 * main - Adds positive integers
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 if successful, 1 otherwise
 */
int main(int argsc, char **argsv)
{
	int idx;
	char *curr;

	if (argsc != 2)
	{
		printf("Error\n");
		return (1);
	}
	curr = argsv[1];
	if (curr[0] == '-')
	{
		printf("%d\n", 0);
		return (0);
	}
	idx = 0;
	while (curr[idx] != '\0')
	{
		if (curr[idx] < 48 || curr[idx] > 57)
		{
			/*	printf("Error\n"); */
			return (1);
		}
		idx++;
	}

	coins_cal(atoi(curr));
	return (0);
}

/**
 * coins_cal - calculates the total number of coins and prints
 * @num: the number to calculate coins of
 * Return: void
 */
void coins_cal(int num)
{
	int coins, idx;
	int arr[] = {25, 10, 5, 2, 1};

	coins = 0;

	for (idx = 0; idx < 5 && num > 0; idx++)
	{
		if (num >= arr[idx])
		{
			num -= arr[idx];
			coins++;
		}
		else
			continue;
	}
	printf("%d\n", coins);
}
