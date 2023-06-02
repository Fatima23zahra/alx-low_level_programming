#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - a linked list
 * @head: the first list to be free
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free(head->str);
	free(head);
}
