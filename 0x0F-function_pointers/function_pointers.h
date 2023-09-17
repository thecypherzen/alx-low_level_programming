#ifndef _FXNPTRS_H
#define _FXNPTRS_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void op_codes(char *, unsigned int);

#endif
