#include "main.h"

/**
 * _isalpha - Check Description
 *
 * @c: input character
 *
 * Description: function checks for uppercase of lowercase letters.
 *
 * Return: 1 if it a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	char u, l;
	int isletter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				isletter = 1;
		}
	}
	return (isletter);
}
