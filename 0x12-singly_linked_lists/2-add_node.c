#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a node to the head of the linked list
 *
 * @head: ptr to the head struct
 * @str: ptr to string being added
 *
 * Return: ptr to new head, NULL otherwise/upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int n = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[n])
		n++;

	tmp->len = n;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
