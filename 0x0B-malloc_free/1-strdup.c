#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns a pointer to a new string which
 * is a duplicate of the string str.
 *
 * @str: string given as parameter
 *
 * Return: pointer to new duplicat string or NULL if failed
 */
char *_strdup(char *str)
{
	size_t x, y;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	newstr = (char *)malloc(sizeof(char) * (x + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y <= x; y++)
	{
		newstr[y] = str[y];
	}
	return (newstr);
}
