#include "main.h"

/**
 * puts2 - function prints every character of a string
 *
 * @str: input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int n = 0, m;

	while (str[n] != '\0')
		n++;

	n -= 1;

	for (m = 0; m <= n; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
