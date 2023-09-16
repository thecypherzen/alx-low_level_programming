#ifndef _MUL_H_ /* mul header */
#define _MUL_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct opr
{
    char *op;
    int (*f)(int a, int b);
} opr_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
