#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a
 * doubly linked list
 *
 * @h: Pointer to a doubly linked list head.
 *
 * Return: The number of elements in the
 * doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
