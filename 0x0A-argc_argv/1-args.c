#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
