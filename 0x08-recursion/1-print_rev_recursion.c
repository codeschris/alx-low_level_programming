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
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s[--n]);
	}
}
