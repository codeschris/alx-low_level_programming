#include "lists.h"

/**
 * free_listint - function frees a linked list
 *
 * @head: ptr to the list struct
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
