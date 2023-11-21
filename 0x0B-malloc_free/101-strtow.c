#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */

void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits string into two
 *
 * @str: string to be splite
 *
 * Return: a pointer to the new allocated memory for the string
 */

char **strtow(char *str)
{
	char **res;
	size_t c, height, x, y, ab;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		res = malloc((height + 1) * sizeof(char *));
	}
		if (res == NULL || height == 0)
		{
			free(res);
			return (NULL);
		}
	for (x = ab = 0; x < height; x++)
	{
		for (c = ab; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				ab++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				res[x] = malloc((c - ab + 2) * sizeof(char));
				if (res[x] == NULL)
				{
					ch_free_grid(res, x);
					return (NULL);
				}
				break;
			}

		}
		for (y = 0; ab <= c; ab++, y++)
			res[x][y] = str[ab];
		res[x][y] = '\0';
	}
	res[x] = NULL;
	return (res);
}
