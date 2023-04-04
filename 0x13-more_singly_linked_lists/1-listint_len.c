#include "lists.h"

/**
 * listint_len - function returns no. of elements in
 * a linked list
 *
 * @h: ptr to the list struct
 *
 * Return: no. of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
