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
	int s;
	int u;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
	}
	for (s = 65; s <= 70; s++)
	{
		u = tolower(s);
		putchar(u);
	}
	putchar('\n');

	return (0);
}
