#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- returns pointer to a 2 dimensional array of integers
 *
 * @width: width input recieved
 * @height: height input recieved
 *
 * Return: pointer to 2-D array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(grid[a]);
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	return (grid);
}
