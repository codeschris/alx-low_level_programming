#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'e')
			continue;
		if (s == 'q')
			continue;

		putchar(s);
	}

	return (0);
}
