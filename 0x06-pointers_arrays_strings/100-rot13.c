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

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		j = 0;

		while (j < 53)
		{
			if (s[i] == alpha[j] || s[i] - 32 == alpha[j])
			{
				s[i] = rot[j];
			}

			j++;
		}

		i++;

	}

	return (s);
}
