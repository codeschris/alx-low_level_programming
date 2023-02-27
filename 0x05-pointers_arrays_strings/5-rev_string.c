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
	int n = 0, m = 0, tmp;

	while (s[n] != '\0')
	{
		n++;
	}

	while (m < n--)
	{
		tmp = s[m];
		s[m++] = s[n];
		s[n] = tmp;
	}
}
