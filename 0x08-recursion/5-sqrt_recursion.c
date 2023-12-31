#include "main.h"

/**
 * check_int - checks integer for square root
 *
 * @square: square integer
 * @x: integer
 *
 * Return: square root or -1
*/

int check_int(int square, int x)
{
	if (x * x == square)
	{
		return (x);
	}
	else if (x > square / x)
	{
		return (check_int(square, x - 1));
	}

	else if (x < square / x)
	{
		return (check_int(square, x + 1));
	}
	return (-1);
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer
* Return: integer - square root, if none returns -1
*/

int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (check_int(n, start));
}
