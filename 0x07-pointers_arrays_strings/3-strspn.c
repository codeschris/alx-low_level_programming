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
	int n = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (n);

	while (*s)
		n++;

	return (n);
}
