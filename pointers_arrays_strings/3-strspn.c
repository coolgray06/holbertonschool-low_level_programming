#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String
 * @accept: Substring
 * Return: Number of bytes in initial seg
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				a++;
				i++;
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return(i);
		}
	}
	return (i);
}
