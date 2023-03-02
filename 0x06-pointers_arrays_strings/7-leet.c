#include "main.h"

/**
 * leet - function encoding string into 1337
 *
 * @s: input string to encode
 *
 * Return: encode string
 */

char *leet(char *s)
{
	int i = 0, j;
	char c[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     z[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == z[j])
				s[i] = c[j];
		}

		i++;
	}

	return (s);
}
