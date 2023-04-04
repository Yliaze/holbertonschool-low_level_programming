#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 *
 * @h: Pointer to a linked list head.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	list_t *head = NULL;
	int count = 0;

	head = (list_t *) h;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
