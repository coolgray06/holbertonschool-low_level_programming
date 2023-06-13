#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			*s1++;
			*s2++;
		}
		if (*s2 == '\0')
			return (haystack);
	}
	return ('\0');
}
