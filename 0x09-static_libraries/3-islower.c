#include "main.h"

/**
 * _islower - Check Description
 * @c: input character
 * Description: The function checks for lowercase letters
 *
 * Return: 1 if lowercase or 0 if uppercaser
 */

int _islower(int c)
{
	char a;
	int low = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			low = 1;
	}
	return (low);
}
