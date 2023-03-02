#include "main.h"

/**
 * reverse_array - function reverses content of array of integers
 *
 * @a: input array
 * @n: input size of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
