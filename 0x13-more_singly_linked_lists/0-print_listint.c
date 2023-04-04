#include "lists.h"

/**
 * print_listint - function prints all elements of singly linked
 * list
 *
 * @h: ptr to the head of list
 *
 * Return: no. of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
