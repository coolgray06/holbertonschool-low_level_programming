#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: the source string.
 * @n: The maximum number of bytes copied from src.
 * @Return: 0.
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;
	int src_len = 0;

	while (src[i])
	{
		src_len++;
		i++;
	}
	i = 0;
	while ((i <= src_len) && (i != n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
