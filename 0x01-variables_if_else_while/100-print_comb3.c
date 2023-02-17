#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;
	int t;

	for (s = '0'; s <= '9'; s++)
	{
		for (t = s + 1; t <= '9'; t++)
		{
			if (t != s)
			{
				putchar(s);
				putchar(t);

				if (s == '8' && t == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
