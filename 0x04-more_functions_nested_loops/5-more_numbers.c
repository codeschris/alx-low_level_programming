#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int n, c;

	for (n = '0'; n <= '10'; n++)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
