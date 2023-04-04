#include "lists.h"

/**
 * pop_listint - function deletes head node and returns
 * head node's data
 *
 * @head: ptr to the list struct
 *
 * Return: data from deleted head node element
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (i);
}
