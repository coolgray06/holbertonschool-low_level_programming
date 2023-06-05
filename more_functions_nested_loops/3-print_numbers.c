#include "main.h"

/**
 * print_numbers - Print the numbers 0 up to 9
 * followed by a new line.
 * Return: The numbers 0 up to 9
 */
void print_numbers(void)
{
	int c = '0';

	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
