#include "main.h"

/**
 * _strcat - function appends src to dest
 *
 * @src: input string
 * @dest: input string
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
