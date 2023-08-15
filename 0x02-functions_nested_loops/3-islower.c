#include "main.h"

/**
 * _islower - Shows if input is lowercase.
 *
 * @c: the character in ASCII code
 *
 * Description: if the input is lowercase it returns 1
 * otherwise 0 is returned
 *
 * Return: 1 for lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
