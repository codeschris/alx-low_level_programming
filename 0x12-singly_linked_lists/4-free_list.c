#include "lists.h"

/**
 * free_list - function frees all elements in a linked list
 *
 * @head: ptr to the head
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
