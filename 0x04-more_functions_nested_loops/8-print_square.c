#include "main.h"

/**
 * print_square - printing squares using hashtages according
 * to given input
 *
 * @size: input
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int n, k;

	if (size <= 0)
		_putchar('\n');

	for (n = 0; n < size; n++)
	{
		for (k = 0; k < n; k++)
		{
			_putchar(35);
		}
	}
	_putchar(35);
}
