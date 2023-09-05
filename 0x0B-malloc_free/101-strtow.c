#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - main entry
 *
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
 * @str: string with words to be splited
 * Return: a pointer to the new allocated memory for the string
 */

char **strtow(char *str)
{
	char **wrd;
	size_t c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		wrd = malloc((height + 1) * sizeof(char *));
	}
		if (wrd == NULL || height == 0)
		{
			free(wrd);
			return (NULL);
		}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				wrd[i] = malloc((c - k + 2) * sizeof(char));
				if (wrd[i] == NULL)
				{
				ch_free_grid(wrd, i);
				return (NULL);
				}
				break;
			}

		}
		for (j = 0; k <= c; k++, j++)
			wrd[i][j] = str[k];
		wrd[i][j] = '\0';
	}
	wrd[i] = NULL;
	return (wrd);
}
