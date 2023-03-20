#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees the dog struct
 *
 * @d: ptr to the dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
