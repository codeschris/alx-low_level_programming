#include "main.h"

/**
 * swap_int - function swaps values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x, y, tmp;

	a = &x;
	b = &y;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
