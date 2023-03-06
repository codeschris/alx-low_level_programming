#include "main.h"

/**
 * _strspn - function returns number of bytes in
 * initial segment of s
 *
 * @s: input string
 * @accept: input character(s)
 *
 * Return: number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i;
	char *x = accept;

	while (*s)
	{
		i = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				n++;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = x;
		if (i == 0)
			break;
	}

	return (n);
}
