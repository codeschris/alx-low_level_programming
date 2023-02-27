#include "main.h"

/**
 * puts_half - function prints second half of a string
 *
 * @str: input string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int m = 0, n, o;

	while (str[m] != '\0')
		m++;

	if (m % 2 == 0)
		o = m / 2;
	else
		o = (m + 1) / 2;

	for (n = o; n < m; n++)
		_putchar(str[n]);
	_putchar('\n');
}
