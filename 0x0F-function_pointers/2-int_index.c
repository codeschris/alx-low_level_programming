#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 *
 * @array: input array
 * @size: size of the array
 * @cmp: ptr to the function
 *
 * Return: 1 if no element matches, -1 if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; n < size; n++)
		if (cmp(array[n]))
			return (n);

	if (n == size)
		return (-1);

	return (-1);
}
