#include "lists.h"

/**
 * print_list - Prints all of the elements of a linked list.
 *
 * @h: Pointer to a linked list head.
 *
 * Return: The number of total nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	list_t *head = NULL;
	int count = 0;

	head = (list_t *) h;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		count++;
	}
	return (count);
}
