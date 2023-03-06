#include "main.h"

/**
 * _strchr - function locates a character in
 * the string
 *
 * @s: input string
 * @c: input character
 *
 * Return: char being searched for
 */

char *_strchr(char *s, char c)
{
	char *i = '\0';

	if (*s != '\0')
	{
		while (*s++)
		{
			if (*s == c)
			{
				i = s;
				break;
			}
		}
	}
	return (i);
}
