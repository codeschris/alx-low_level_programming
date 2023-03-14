#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns copy of string given,
 * contained in a pointer to newly allocated space
 *
 * @str: input string to be duplicated
 *
 * Return: NULL if str is null, pointer to dup otherwise
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *new;
	char *st;
	int n = 0, x = 0;

	st = str;

	while (*str)
	{
		x++;
		str++;
	}

	str = st;
	new = malloc(sizeof(char) * (x + 1));
	st = new;

	if (new != NULL)
	{
		for (; n < x; n++)
		{
			new[n] = *str;
			str++;
		}
		new = '\0';
		return (st);
	}
	else
		return (NULL);
}
