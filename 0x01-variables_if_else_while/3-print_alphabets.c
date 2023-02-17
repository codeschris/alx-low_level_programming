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

	for(s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
		int up = toupper(s);
		putchar(up);
	}
	putchar('\n');

	return (0);
}
