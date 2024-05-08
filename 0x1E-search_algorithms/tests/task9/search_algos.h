#ifndef SEARCH_LOGS_H
#define SEARCH_LOGS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_bin_subarray(int *array, size_t start, size_t stop);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
/*listint_t *jump_list(listint_t *list, size_t size, int value);*/

#endif /* SEARCH_LOGS_H */
