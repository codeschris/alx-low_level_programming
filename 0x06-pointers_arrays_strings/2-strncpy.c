#include "main.h"

/**
 * _strncpy - function that copies strings depending
 * on bits given
 *
 * @dest: input string
 * @src: input string
 * @n: set limit bit
 *
 * Return: String cut according to given limit
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
		y++;

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
		*dest[x] = '\0';

	return (dest);
}
