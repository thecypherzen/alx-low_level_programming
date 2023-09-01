#include "main.h"


/**
 * main - Multiplies two numbers
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 if successful, 1 otherwise
 */
int main(int argsc, char **argsv)
{
	int mult;

	if (argsc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argsv[1]) * atoi(argsv[2]);

	printf("%d\n", mult);

	return (0);
}
