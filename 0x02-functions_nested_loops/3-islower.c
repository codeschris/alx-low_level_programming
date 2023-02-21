#include "main.h"

/**
 * islower - Check Description
 *
 * Description: The function checks for lowercase letters
 *
 * Return: 0 or 1
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
