#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a
 *  parameter on each element of an array.
 * @array: The array
 * @size: The number of elements
 * @action: The function to plug into
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0) 
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
