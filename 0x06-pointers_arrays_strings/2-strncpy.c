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
	char *tmp = dest;
	int x = 0, len = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}

	if (n > len)
		n = len;

	for (; x < n; x++)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
