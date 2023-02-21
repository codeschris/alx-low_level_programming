#include "main.h"

/**
 * islower - Check Description
 *
 * Description: The function checks for lowercase letters
 *
 * Return: value depending on the case of the letter
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
