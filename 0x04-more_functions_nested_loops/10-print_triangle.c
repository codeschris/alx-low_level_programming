#include "main.h"

/**
 * print_triangles - functions prints triangles according
 * to input given
 * @size: input
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x < size; x++)
		{
			for (z = size - x; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
