#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer.
 * @size: Number of elements in the array
 * @cmp: Compare functions
 * @array: Array compared
 * Return: Element space in which the comparison returns true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
