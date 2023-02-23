#include "main.h"

/**
 * _isupper - Check Description
 * @c: input
 * Description: checks for uppercase letters and returns
 * 1 if uppercase and 0 otherwise
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
