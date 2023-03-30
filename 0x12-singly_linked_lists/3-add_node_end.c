#include "lists.h"
#include <string.h>

/**
 * add_node_end - function adds a node at the end of linked list
 *
 * @head: ptr to the head struct
 * @str: input string to be added
 *
 * Return: ptr to the new element, NULL otherwise/upon failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int n = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[n])
		n++;

	new_node->len = n;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
