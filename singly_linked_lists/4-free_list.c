#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: The original linked list.
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmpfree = head;
	list_t *next = NULL;

	while (tmpfree != NULL)
	{
		next = tmpfree->next;
		free(tmpfree->str);
		free(tmpfree);
		tmpfree = next;
	}
}
