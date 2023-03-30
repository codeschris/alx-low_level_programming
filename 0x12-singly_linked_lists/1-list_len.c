#include "lists.h"
#include <stdio.h>

/**
 * list_len - function gets length of the linked list
 *
 * @h: head of linked list
 *
 * Return: number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
