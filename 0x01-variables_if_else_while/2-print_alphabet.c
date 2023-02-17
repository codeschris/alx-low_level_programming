#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for(int s = "a"; s <= "z", s++)
	{
		putchar(s);
		putchar('\n');
	}

	return (0);
}
