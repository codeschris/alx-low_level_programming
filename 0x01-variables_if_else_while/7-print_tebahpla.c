#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s;
	
	for (s = 'z'; s >= 'a'; s--)
		putchar(s);

	return (0);
}	
