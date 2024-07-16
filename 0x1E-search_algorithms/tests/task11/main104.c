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
	    -5, -5, 0, 0, 0, 1, 1, 2, 2, 2, 5, 5, 6, 6, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));
    printf("Found %d at index: %d\n\n", 9, advanced_binary(array, size, 9));
    printf("Found %d at index: %d\n\n", 0, advanced_binary(array, size, 0));
    printf("Found %d at index: %d\n", 1, advanced_binary(array, size, 1));
    printf("Found %d at index: %d\n", -5, advanced_binary(array, size, -5));
    printf("Found %d at index: %d\n", 2, advanced_binary(array, size, 2));
    printf("Found %d at index: %d\n", 6, advanced_binary(array, size, 6));
    printf("Found %d at index: %d\n", 7, advanced_binary(array, size, 7));

    return (EXIT_SUCCESS);
}
