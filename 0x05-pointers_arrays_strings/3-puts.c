#include "main.h"

/**
 * _puts - function prints a string, followed by newline
 * to stdout
 *
 * @str: input string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
