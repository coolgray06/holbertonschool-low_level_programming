#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String
 * @accept: Bytes
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)

{
	int i = 0;
	int a;
	char *p;

	while (s[i] != '\0')
	{
		for (a = 0; accept[a] != 0; a++)
		{
			if (s[i] == accept[a])
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}
	return ('\0');
}
