#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: ptr to the new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	char *namecp, *owncp;
	int nlen = 0, olen = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[nlen])
		nlen++;
	while (owner[olen])
		olen++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecp = malloc(nlen + 1);
	if (namecp == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		namecp[i] = name[i];
	namecp[i] = '\0';

	owncp = malloc(olen + 1);
	if (owncp == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		owncp[i] = owner[i];
	owncp[i] = '\0';

	new_dog->name = namecp;
	new_dog->age = age;
	new_dog->owner = owncp;
	return (new_dog);
}
