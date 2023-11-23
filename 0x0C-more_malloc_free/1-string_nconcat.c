#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- Concatenates two(2) strings
 *
 * @s1: first string
 * @s2 :second string
 * @n: number of strings to concatenate
 *
 * Return: pointer to newly allocated memory, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *new;

	if (s1 == NULL)
		a = 0;
	else
	{
	for  (a = 0; s1[a] != '\0'; a++)
		;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}

	if (b > n)
		b = n;
	new = malloc(sizeof(char) * (a + b + 1));
	if (new == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		new[c] = s1[c];
	for (c = 0; c < b; c++)
		new[c + a] = s2[c];
	new[a + b] = '\0';
	return (new);
}
