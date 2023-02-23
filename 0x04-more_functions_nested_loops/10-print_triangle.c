#include "main.h"

/**
 * print_triangle - functions prints triangles according
 * to input given
 * @size: input
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int x, y, z = size - 1;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < z)
					_putchar(' ');
				else
					_putchar(35);
			}
			z--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
