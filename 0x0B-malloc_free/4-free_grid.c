#include "main.h"

/**
 * free_grid - Frees a previously allocated 2d array
 * @grid: the 2d array
 * @height: num of rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
