#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s;
	char t;
	int up;

	for (s = 'a'; s <= 'z'; s++)
	{
		up = toupper(s);

		putchar(s);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
