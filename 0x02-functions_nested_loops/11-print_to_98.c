#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Check Description
 * @x: integer*
 * Description: function printing natural numbers from x to 98,
 * followed by a newline
 *
 * Return: Nothing
 */

void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98; x++)
		{
			printf("%d", x);

			if (x == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; x >= 98; x--)
		{
			printf("%d", x);

			if (x == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
