#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes variables
 * of type 'struct dog'
 *
 * @d: ptr to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
