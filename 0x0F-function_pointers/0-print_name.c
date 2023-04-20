#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main
 * @f: function
 * @name: name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
