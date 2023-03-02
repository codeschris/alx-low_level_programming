#include "main.h"

/**
 * cap_string - function capitalizes words in string
 *
 * @s: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i] ==  ' ')
		{
			++i;

			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
	}
}
