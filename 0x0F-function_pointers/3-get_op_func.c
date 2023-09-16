#include "3-cal.h"

/**
 * get_op_func - select operation to perform
 * @s: operation string by user
 * Return: operation on success, NULL otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	opr_t oprs[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int i = 0;

	while (s && (int)strlen(s) == 1 && oprs[i].op)
	{
		if (*(oprs[i].op) == *s)
			return (oprs[i].f);
		i++;
	}
	return (NULL);
}
