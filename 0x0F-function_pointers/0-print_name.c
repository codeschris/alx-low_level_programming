#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a given name
 * @name: input string of name
 * @f: function used to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
