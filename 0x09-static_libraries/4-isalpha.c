#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: Characters in the ASCII code
 *
 * Description: This program returns 1 if c is a character irrespective
 * of the case (loer or upper)
 *and returns 0 if otherwise
 * Return: 1 if c is a character and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
