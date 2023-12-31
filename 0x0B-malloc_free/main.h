#ifndef MALLOC_F_H
#define MALLOC_F_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char **make_arr(char *str);

#endif /* MALLOC_F_H */
