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

		while (*one == *two && *two != '\0')
		{
			*one++;
			*two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
