#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * doubly linked list
 *
 * @head: The head of the linked list.
 *
 * Return: sum of all the data (n) of a doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head != NULL)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}
	return (sum);
}
