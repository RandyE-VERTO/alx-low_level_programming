#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz for multiples of 3
 * buzz for multiples of 5
 * fizz-buzz for numbers that are multiples of 3&5
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
