#include "main.h"

/**
 * alloc_grid - creates a 2D matrix
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to the 2D matrix
 */

int **alloc_grid(int width, int height)
{
	int **grid_2D;
	int ht, wt;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_2D = malloc(sizeof(int *) * height);
	if (grid_2D == NULL)
		return (NULL);

	for (ht = 0; ht < height; ht++)
	{
		grid_2D[ht] = malloc(sizeof(int) * width);
		if (grid_2D[ht] == NULL)
		{
			for (wt = 0; wt < ht; wt++)
				free(grid_2D[wt]);
			free(grid_2D);
			return (NULL);
		}
	}

	ht = 0;
	while (ht < height)
	{
		wt = 0;
		while (wt < width)
		{
			grid_2D[ht][wt] = 0;
			wt++;
		}
		ht++;
	}

	return (grid_2D);
}
