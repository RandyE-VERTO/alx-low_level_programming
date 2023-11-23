#include "main.h"
#include <stdlib.h>

/**
 * _calloc- allocates memory for an array
 *
 *@nmemb: number of block
 *@size: size of element
 *
 *Return: void pointer, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
