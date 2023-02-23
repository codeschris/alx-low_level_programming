#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int n = 0, c;

	for (;n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
