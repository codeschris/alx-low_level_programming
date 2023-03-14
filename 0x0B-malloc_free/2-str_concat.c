#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concats 2 strings
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer to concat strings, NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, n = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new = malloc(sizeof(char) * len);

	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[n++] = s1[i];

	for (i = 0; s2[i]; i++)
		new[n++] = s2[i];

	return (new);
}
