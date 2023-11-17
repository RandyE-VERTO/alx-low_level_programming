#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
