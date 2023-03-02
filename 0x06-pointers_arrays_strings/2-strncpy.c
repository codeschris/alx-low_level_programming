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
	int x = 0, y = 0;

	while (src[y])
		y++;

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
		dest[x] = '\0';

	return (dest);
}
