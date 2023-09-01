#include "main.h"

/**
 * main - Adds positive integers
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 if successful, 1 otherwise
 */
int main(int argsc, char **argsv)
{
	int sum, i, j;
	char *curr;

	sum = 0;
	if (argsc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		for (i = 1; i < argsc; i++)
		{
			j = 0;
			curr = argsv[i];

			while (curr[j] != '\0')
			{
				if (curr[j] < 48 || curr[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argsv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
