#include "main.h"
#include <stdlib.h>

/**
 * array_range- creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array , or NULL if it fails
 */

int *array_range(int min, int max)
{
	int a, spn;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	spn = max - min + 1;
	ptr = malloc(sizeof(int) * spn);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < spn; a++)
	{
		ptr[a] = min;
		min++;
	}
	return (ptr);
}
