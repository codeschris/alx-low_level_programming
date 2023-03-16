#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of int
 *
 * @min: min number
 * @max: max number
 *
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *new;
	int df, n;

	if (min > max)
		return (NULL);

	df = max - min;
	new = malloc((df + 1) * sizeof(int));
	if (new == NULL)
		return (NULL);

	for (n = 0; n <= df; n++)
		new[n] = min++;

	return (new);
}
