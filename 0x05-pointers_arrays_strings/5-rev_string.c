#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s: input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
		_putchar(s[--n]);
	}
}
