#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - frees 2d array
 * @height:height dimension of grid
 * @grid:2d grid
 * Return:no return
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
