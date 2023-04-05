#include "lists.h"

/**
 * print_dlistint - Prints all of the elements of a
 * doubly linked list.
 *
 * @h: Pointer to a doubly linked list head.
 *
 * Return: The number of total nodes in the
 * doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;

	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
