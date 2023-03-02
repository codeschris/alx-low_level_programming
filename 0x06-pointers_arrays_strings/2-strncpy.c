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
	int i;

	for (i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);

	for (i = 0; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
