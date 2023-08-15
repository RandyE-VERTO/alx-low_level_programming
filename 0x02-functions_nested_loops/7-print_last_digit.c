#include "main.h"
/**
 * print_last_digit - prints the last
 * digits of a number
 *
 * @w: input number as an integer
 *
 * Return: last digit
 */

int print_last_digit(int w)
{
	int ld;

	ld = w % 10;
	if (ld > 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
	_putchar('\n');
}
