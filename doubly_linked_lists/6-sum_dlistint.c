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
	int sum;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
