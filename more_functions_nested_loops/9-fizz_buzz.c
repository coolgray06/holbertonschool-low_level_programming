#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 1;

	for (; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
	}
	printf("\n");
	return (0);
}
