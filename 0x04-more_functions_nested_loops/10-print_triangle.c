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
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y >= 1; y--)
			{
				for (z = 1; z <= x; z++)
				{
					_putchar('\n');
				}
				_putchar('\n');
			}
		}
	}
}
