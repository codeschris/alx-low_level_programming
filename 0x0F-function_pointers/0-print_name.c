#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints a given name
 *
 * @name: input string of name
 * @f: function that prints the given name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
