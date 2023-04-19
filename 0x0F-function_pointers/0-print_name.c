#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using function pointer
 * @name: string to be printed
 * @f: pointer to function that prints string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

