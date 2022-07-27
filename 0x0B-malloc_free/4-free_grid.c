#include "main.h"

/**
 * free_grid - frees the 2d array
 * @grid: pointer to 2d array
 * @height: no of rows
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
