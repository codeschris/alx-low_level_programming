#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars
 * and inits with specific char
 *
 * @size: size of array
 * @c: chat to init array
 *
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size <- 0)
		return (NULL);

	x = malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);
	if (x == 0)
		return (NULL);

	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
