#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates memory using malloc and free
 *
 * @ptr: pointer to mem attached before
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: void ptr to new mem location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *loc, *new;
	unsigned int n = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	loc = malloc(new_size);
	new = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (; n < old_size; n++)
		loc[n] = new[n];
	free(ptr);
	return (loc);
}
