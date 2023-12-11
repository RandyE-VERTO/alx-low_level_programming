#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums up two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of the numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - multiplies two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - multiplies two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: remainder after division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
