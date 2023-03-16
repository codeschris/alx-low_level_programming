#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concats two strings
 *
 * @s1: input string
 * @s2: input string
 * @n: no. of strings to concat
 *
 * Return: ptr to concatenated strings, NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		n = l2;

	new = malloc(l1 + n + 1);
	if (new == NULL)
		return (NULL);

	for (; i < (l1 + n); i++)
	{
		if (i < l1)
			new[i] = *s1, s1++;
		else
			new[i] = *s2, s2++;
	}
	new[i] = '\0';
	return (new);
}
