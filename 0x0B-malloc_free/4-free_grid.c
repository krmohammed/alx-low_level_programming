#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: array(grid) to be freed
 * @height: size of rows
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
