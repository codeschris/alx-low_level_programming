#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for array using malloc
 *
 * @nmemb: no. of memory spaces
 * @size: size of nmemb
 *
 * Return: ptr to allocated space, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (; n < nmemb * size; n++)
		*(x + n) = 0;

	return (x);
}
