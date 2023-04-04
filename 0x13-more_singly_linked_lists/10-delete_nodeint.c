#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at given index
 *
 * @head: ptr to list struct
 * @index: index of node being deleted
 *
 * Return: 1 Success, -1 Failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (i < index)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			i++;
		}
		delnode = tmp;
		delnode = delnode->next;
		tmp->next = delnode->next;
		free(delnode);
	}
	return (1);
}
