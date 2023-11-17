#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

