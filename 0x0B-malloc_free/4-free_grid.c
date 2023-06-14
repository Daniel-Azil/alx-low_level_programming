#include "main.h"
#include <stdlib.h>
/**
 * free_grid - deallocates memory for a 2D array grid.
 * @grid: 2D array of integers.
 * @height: height of the grid.
 * Returns: no return value.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
