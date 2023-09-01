#include "main.h"


/**
 * main - Entry point
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 always
 */
int main(int argsc, char **argsv)
{
	int i;

	for (i = 0; i < argsc; i++)
		printf("%s\n", *(argsv + i));

	return (0);
}
