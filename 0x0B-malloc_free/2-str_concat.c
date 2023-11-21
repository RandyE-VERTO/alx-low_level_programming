#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates (joins) two string
*
* @s1: string 1
* @s2: string 2
*
* Return: pointer to new string, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;
	char *join;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (*(s1 + a) != '\0')
	{
		a++;
	}
	b = 0;
	while (*(s2 + b) != '\0')
	{
		b++;
	}

	c = a + b;
	join = (char *) malloc(c * sizeof(char) + 1);

	if (join == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
		join[i] = s1[i];
	for (i = 0; i < b; i++)
		join[i + a] = s2[i];

	return (join);
}
