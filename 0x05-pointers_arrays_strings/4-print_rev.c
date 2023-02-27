#include "main.h"

/**
 * print_rev - function that prints in reverse
 *
 * @s: input string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}

	while (n)
	{
		_putchar(s[--n]);
	}
	_putchar('\n');
}
