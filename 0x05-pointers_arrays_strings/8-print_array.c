#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n number of elements of
 * an array.
 * @a: pointer input
 * @n: size
 *
 * Return: nothing;
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
