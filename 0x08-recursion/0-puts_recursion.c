#include "main.h"

/**
 *_puts_recursion - Write a function that prints a string,
 *followed by a new line
 *
 *@s: string being printed
 *
 * Return: 0 always for success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
