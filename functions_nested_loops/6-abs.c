#include "main.h"

/**
 *_abs - Check main
 * @c: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number c
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
