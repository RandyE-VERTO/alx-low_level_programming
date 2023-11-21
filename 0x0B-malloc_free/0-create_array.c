#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars,
 * and initializes it with a specific char
 *
 * @c: string character
 * @size: input for size of the array
 *
 * Return: pointer to the array or null for failure
 */

char *create_array(unsigned int size, char c)
{
	size_t x;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
