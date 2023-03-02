#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: input string
 * @src: input string
 * @n: input integer
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest, *st = src;
	int x = 0, len = 0;

	while (*src)
	{
		len++;
		src++;
	}

	if (n > len)
		n = len;

	src = st;

	for (; x < n; x++)
		*dest++ = *src++;

	return (tmp);
}
