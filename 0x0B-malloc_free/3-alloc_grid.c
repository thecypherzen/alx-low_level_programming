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
	int **arr, *temp, i, j;

	if (width > 0 && height > 0)
	{
		arr = malloc(height * sizeof(int *));
		if (arr != NULL)
		{
			for (i = 0; i < height; i++)
			{
				temp = malloc(width * sizeof(int));
				if (temp != NULL)
				{
					for (j = 0; j < width; j++)
						temp[i] = 0;
					arr[i] = temp;
				}
				else
					free(temp);
			}
		}
		else
			free(arr);
	}
	else
		arr = NULL;
	return (arr);
}
