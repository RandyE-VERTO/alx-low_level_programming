#include "main.h"
#include <stdio.h>

/**
 * main- prints all arguments it recieves
 *
 * @argc: argument count
 * @argv: Argument array
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

