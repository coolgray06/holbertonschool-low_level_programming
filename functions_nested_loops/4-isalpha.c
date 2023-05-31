#include "main.h"

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  * Description: function returns 1 if the character is a
  * letter, lowercase or uppercase.
  * Return: 1 for lowercase character or 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
