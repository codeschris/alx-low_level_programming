#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Uses ASCII (between 48 and 57 for 0 to 9)
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
		putchar(s);

	putchar('\n');

	return (0);
}
