#include "main.h"

/**
 * times_table - Check Description
 *
 * Description - function print the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 0; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if ((n / 10) == 0)
			{
				if (j != 9)
					_putchar(' ');
				_putchar(n + '0');

				if (j == 0)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (j == 0)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
