#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes another function
 * given as a parameter on each element of an array
 *
 * @array: input array
 * @size: input size of the array
 * @action: ptr to the function provided
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || action == NULL)
		return;

	for (; x < size; x++)
		action(array[x]);
}
