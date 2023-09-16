#include "3-calc.h"

/**
 * get_op_func - select operation to perform
 * @s: operation string by user
 * Return: operation on success, NULL otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int i = 0;

	while (s && (int)strlen(s) == 1 && ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
