#include "3-calc.h"

/**
 * main - controls operation sequence for project 3
 * @args: number of arguments
 * @list: array of arguments
 * Return: result of operation on success
 *         98 if wrong num of args are passed
 *         99 if wrong operation is passed
 *         100 if division by 0
 */
int main(int args, char **list)
{
	int len, (*operation)(int, int), n1, n2;
	char *opr;

	if (args != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(list[1]), n2 = atoi(list[3]);
	opr = list[2];
	len = (int)strlen(opr);
	if (len == 1 && (*opr == '/' || *opr == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	operation = get_op_func(opr);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", operation(n1, n2));
	return (0);
}
