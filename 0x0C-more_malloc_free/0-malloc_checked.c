#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 *
 * @b: input integer
 *
 * Return: pointer to allocated memory, NULL otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
