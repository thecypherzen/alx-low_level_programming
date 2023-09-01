#include "main.h"


/**
 * main - Entry point
 * @argsc: cmd argument count
 * @argsv: cmd argument list
 * Return: 0 always
 */
int main(int argsc, char **argsv)
{
	printf("%d\n", --argsc);
	(void)**argsv;
	return (0);
}
