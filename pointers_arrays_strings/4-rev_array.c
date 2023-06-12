#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Array
 * @n: Element
 * Return: Void
 */

void reverse_array(int *a, int n)

{
	int x = (n - 1);
	int y;
	int i = 0;

	while (i <= x)
	{
		y = a[i];
		a[i] = a[x];
		a[x] = y;
		i++;
		x--;
	}
}
