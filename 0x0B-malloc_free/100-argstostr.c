#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all program arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the array of char
 */

char *argstostr(int ac, char **av)
{
	char *outp;
	int x, y, z = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	len += ac;

	outp = malloc(sizeof(char) * len + 1);
	if (outp == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			outp[z] = av[x][y];
			z++;
		}
		if (outp[z] == '\0')
		{
			outp[z++] = '\n';
		}
	}
	return (outp);
}
