#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s, t, u;

	for (s = '0'; s <= '9'; s++)
	{
		for (t = s + 1; t <= '9'; t++)
		{
			for (u = t + 1; u <= '9'; u++)
			{
				if ((t != s) != u)
				{
					putchar(s);
					putchar(t);
					putchar(u);

					if (s == '7' && t == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
