#include "main.h"

/**
 * free_grid - frees a 2D matrix
 * @grid: 2D matrix
 * @height: height of matrix
 *
 */

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}

	free(grid);
}

