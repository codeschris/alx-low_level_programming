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
	char *new, *st1, *st2;
	int n = 0, len1 = 0, len2 = 0;

	st1 = s1;
	st2 = s2;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}

	s2 = st2;
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	st1 = new;

	if (new == NULL)
		return (NULL);
	for (; n < (len1 + len2); n++)
	{
		if (n < len1)
		{
			new[n] = *s1;
			s1++;
		}
		else
		{
			new[n] = *s2;
			s2++;
		}
	}
	new[n] = '\0';
	return (st1);
}
