#include "main.h"

/**
 * _pow_recursion - Returns the value of x
 * to power y
 *
 * @x: number input
 * @y: power input
 *
 * Return: 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
