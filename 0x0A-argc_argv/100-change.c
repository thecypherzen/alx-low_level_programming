#include "main.h"

/**
 * main - Adds positive integers
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 if successful, 1 otherwise
 */
int main(int argsc, char **argsv)
{
	int idx, num, coins;
	int arr[] = {25, 10, 5, 2, 1};

	if (argsc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argsv[1]);
	coins = 0;
	for (idx = 0; idx < 5 && num > 0; idx++)
	{
		while (num >= arr[idx])
		{
			num -= arr[idx];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
