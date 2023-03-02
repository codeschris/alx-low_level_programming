#include "main.h"

/**
 * string_toupper - function converts lowercase letters
 * to uppercase letters
 *
 * @s : input string
 *
 * Return: uppercase letters/strings
 */

char *string_toupper(char *is)
{
	char *st = is;

	while (*is)
	{
		if (*is >= 'a' && is <= 'z')
			*is -= 32;
		is++
	}

	return (st);
}
