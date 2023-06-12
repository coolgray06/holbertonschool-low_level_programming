#include "main.h"

/**
 * _strcmp - Compares two strings s1 and s2
 * @s1: number 1
 * @s2: number 2
 * Return: 0 if -15 is less than 15 if greater than
 */
int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
