#ifndef SEARCH_LOGS_H
#define SEARCH_LOGS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_subarray(int *array, size_t start, size_t stop);

#endif /* SEARCH_LOGS_H */
