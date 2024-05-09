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
	    -1, 0, 0, 1, 1, 1, 2, 4, 5, 5, 6, 6, 7, 7, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]), i;
    for (i = 0; i < size; i++)
    {
	    printf("Found %d at index: %d\n\n", array[i],
		   advanced_binary(array, size, array[i]));
	    /*printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	    printf("Found %d at index: %d\n", 999,
	    advanced_binary(array, size, 999));*/
    }
    return (EXIT_SUCCESS);
}
