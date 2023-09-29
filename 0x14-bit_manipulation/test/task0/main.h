#ifndef BITWISE_H
#define BITWISE_H
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int _uint;
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
_uint _pow(_uint num, _uint pow);

#endif
