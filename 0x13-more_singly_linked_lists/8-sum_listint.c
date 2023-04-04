#include "lists.h"

/**
 * sum_listint - function returns sum of data in the linked
 * list
 *
 * @head: ptr to the list struct
 *
 * Return: Result of the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
