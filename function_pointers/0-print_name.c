#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Puts name into function f
 * @name: Name
 * @f: Function to run
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
