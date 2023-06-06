#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: a pointer to the elements list
 */
void free_listint2(listint_t **head)
{

	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
