#include "main.h"

/**
 *_isdigit - Checks for character case (uppercase)
 *
 * @c: is a character in the ACSII code
 *
 * Return: 1 for uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
