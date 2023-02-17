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

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}

	putchar('\n');

	return (0);
}
