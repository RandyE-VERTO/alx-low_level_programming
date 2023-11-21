#include "main.h"
#include <stdlib.h>

/**
 * free_grid-  frees a 2 dimensional grid previously created
 *
 * @grid: pointer to a 2-D array of integers (grid)
 * @height: grid height
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
