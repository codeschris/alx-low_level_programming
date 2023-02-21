#include "main.h"

/**
 * Function islower - Check Description
 *
 * Description: The function checks for lowercase letters
 *
 * Return: 0 or 1
 */

void _islower()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		return 1;
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		return 0;
	}
}
