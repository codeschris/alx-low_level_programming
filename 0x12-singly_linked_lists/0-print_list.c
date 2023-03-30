#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints linked list
 *
 * @h: ptr to head of list
 *
 * Return: number of present nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}
	return (n);
}
