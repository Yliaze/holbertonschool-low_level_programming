#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at the nth position of a
 * doubly linked list
 *
 * @head: The head of the linked list.
 * @index: The position of the node to return.
 *
 * Return: The node at the nth position, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{

		while (head)
		{
			if (i == index)
			{
				return (head);
			}
			head = head->next;
			i++;
		}
	}
	return (0);
}
