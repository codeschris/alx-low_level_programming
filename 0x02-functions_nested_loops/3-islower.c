#include "main.h"

/**
 * Function islower - Check Description
 *
 * Description: The function checks for lowercase letters
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			return (0);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
}
