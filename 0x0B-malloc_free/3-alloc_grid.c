#include "main.h"
/**
 * alloc_grid - creates a two-dimensional array of integers
 * @width: columns of 2d array
 * @height: rows of 2d aray
 * Return: pointer to array on success.
 *         NULL on failure, or if width/ height <= 0;
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width > 0 && height > 0)
	{
		arr = malloc(height * sizeof(int *));
		if (arr != NULL)
		{
			for (i = 0; i < height; i++)
			{
				arr[i] = malloc(width * sizeof(int));
				if (arr[i] != NULL)
				{
					for (j = 0; j < width; j++)
						arr[i][j] = 0;
				}
				else
				{
					for (j = 0; j < i; j++)
						free(arr[j]);
					free(arr);
					return (NULL);
				}
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (arr);
}
