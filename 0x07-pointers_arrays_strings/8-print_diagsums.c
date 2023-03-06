#include "main.h"

/**
 * print_diagsums - function prints sum of two diagonals
 * of a square matrix of integers
 *
 * @a: input digit(s)
 * @size: input size
 *
 * Return: result of sum
 */

void print_diagsums(int *a, int size)
{
	int i = 0, m = size * size, s1 = 0, s2 = 0;

	for (; i < m; i += size + 1)
		s1 += a[i];

	for (i = size -1; i < m - 1; i += size -1)
		s2 += a[i];

	printf("%d, %d\n", s1, s2);
}
