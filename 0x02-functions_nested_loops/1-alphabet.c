#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: Alphabets to be printed are in lowercase
 * Return: 0 (successful execution)
 */
void print_alphabet(void)
{
	int y;

	for (y = 97; y <= 122; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
