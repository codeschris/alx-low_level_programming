#include "main.h"

/**
 * _strncat - function that concatenates strings
 * according to bytes being allocated
 *
 * @dest: input string
 * @src: input string
 * @n: bytes in number format
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest, *st = src;
	int len = 0, i = 0;

	while (*dest)
		dest++;

	while (*src)
	{
		src++;
		len++;
	}

	if (n > len)
		n = len;

	src = st;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
