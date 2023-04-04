#include "lists.h"

/**
 * print_listint - function prints all elements of singly linked
 * list
 *
 * @h: ptr to the list struct
 *
 * Return: no. of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
