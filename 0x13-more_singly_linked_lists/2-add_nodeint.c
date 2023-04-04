#include "lists.h"

/**
 * add_nodeint - function adds a new node
 * at the beginning of the linked list
 *
 * @head: ptr to node
 * @n: input int
 *
 * Return: address of new element, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
