#include "main.h"

/**
 * string_toupper - function converts lowercase letters
 * to uppercase letters
 *
 * @s : input string
 *
 * Return: uppercase letters/strings
 */

char *string_toupper(char *s)
{
	char *st = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (st);
}
