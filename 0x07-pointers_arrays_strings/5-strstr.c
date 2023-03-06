#include "main.h"

/**
 * _strstr - function locates a substring
 *
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *st = needle, *en = haystack;

	while (*haystack)
	{
		en = haystack;
		needle = st;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = en + 1;
	}
	return (0);
}
