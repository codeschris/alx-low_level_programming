#include "main.h"

/**
 * _isupper - Check Description
 * @c: input
 * Description: checks for uppercase letters
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	char i;
	int low = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			low = 1;
	}
	return (low);
}
