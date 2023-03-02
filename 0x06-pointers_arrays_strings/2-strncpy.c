#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: input string
 * @src: input string
 * @n: bits in number format
 *
 * Return: pointer returning string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest, *st = src;
	int x = 0, len = 0;

	while (*src)
	{
		src++;
		len++;
	}

	len++;

	if (n > len)
		n = len;

	src = st;

	for (; x < n; x++)
		*dest++ = *src++;

	return (tmp);
}
