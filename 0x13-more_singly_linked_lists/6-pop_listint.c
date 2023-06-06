#include "lists.h"

/**
 * pop_listint - get the first element of a linked list and remove it
 * @head: a pointer to a pointer to the first elements in the linked list
 *
 * Return: the first list element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int new;
	listint_t *temp;

	if (!(head && *head))
		return (0);

	new = (*head)->n;

	temp = *head;
	*head = temp->next;
	free(temp);

	return (new);
}
