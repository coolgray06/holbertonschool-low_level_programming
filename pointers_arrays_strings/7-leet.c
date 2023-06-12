#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @n: input
 * Return: Value of str
 */

char *leet(char *str)

{
	int i = 0;
	int n = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		for (n = 0; n <= 9; n++)
		{
			if (str[i] == s1[n])
			{
				str[i] = s2[n];
			}
		}
		i++;
	}
	return (str);
}
