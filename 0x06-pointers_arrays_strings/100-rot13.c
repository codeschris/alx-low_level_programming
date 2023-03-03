#include "main.h"

/**
 * rot13 - function encodes a string using rot13
 *
 * @s: input string
 *
 * Return: encode string
 */

char *rot13(char *s)
{
	int i = 0, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		j = 0;

		while (i < 53)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
				s[i] = r[j];

			i++;
		}
		j++;
	}
	return (s);
}
