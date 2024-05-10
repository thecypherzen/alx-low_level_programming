#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
	    -1, 0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    int array_1[16] = {
	    0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    int i;
    size = sizeof(array_1) / sizeof(array[0]);
    printf("Found at index: %d\n", exponential_search(array, 16, 76));
    printf("Found %d at index: %d\n\n", -1, exponential_search(array, size, -1));
    printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
    printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
    printf(".......Second array.......\n\n");
    for(i = 0; i < (int)size; i++)
	    printf("%d%s",array_1[i], i == (int)size - 1 ? "\n" : ", ");
    printf("Found %d at index: %d\n\n", 999, exponential_search(array_1, size, 999));
    printf("Found at index: %d\n", exponential_search(array_1, 16, 123456789));
    return (EXIT_SUCCESS);
}
