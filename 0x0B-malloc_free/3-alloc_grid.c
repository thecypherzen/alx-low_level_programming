#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - creates a two-dimensional array of integers
 * @width: columns of 2d array
 * @height: rows of 2d aray
 * Return: pointer to array on success.
 *         NULL on failure, or if width/ height <= 0;
 */
int **alloc_grid(int width, int height)
{
	int **arr, *temp, i;

	if (width > 0 && height > 0)
	{
		arr = malloc(height * sizeof(int *));
		if (arr != NULL)
		{
			for (i = 0; i < height; i++)
			{
				temp = calloc(width, sizeof(int));
				if (temp != NULL)
					arr[i] = temp;
			}
		}
	}
	else
		arr = NULL;
	return (arr);
}
