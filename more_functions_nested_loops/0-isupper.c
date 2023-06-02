#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks variable c if it is uppercase
 * @c: the char that is checked
 *
 * Return: 1 if upper, 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
