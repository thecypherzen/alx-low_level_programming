#ifndef MORE_MALLOC_F_H
#define MORE_MALLOC_F_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_cpy_mem(void *dest, void *src, unsigned int sz);
int num_check(int count, char **args);
char *_mult(char *num1, char *num2);
void print_res(char *msg);

#endif /* MORE_MALLOC_F_H */
