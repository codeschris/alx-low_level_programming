#include "main.h"

/**
 * _print_rev_recursion - function prints string in reverse
 *
 * @s: input string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		_print_rev_recursion(s - 1);
	}
}
