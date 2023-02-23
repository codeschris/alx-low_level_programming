#include "main.h"

/**
 * print_line - prints lines according to input given
 * @c: input
 *
 * Return: Nothing
 */

void print_line(int c)
{
	int i;

	for (i = '0'; i < c; i++)
	{
		if (c > 0)
			_putchar('_');
	}
	_putchar(36);
	_putchar('\n');
}
