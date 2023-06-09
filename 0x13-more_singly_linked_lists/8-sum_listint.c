#include "lists.h"

/**
 * sum_listint - compute the sum of all elements in a linked list
 * @head: a pointer to the first node
 *
 * Return: the sum of all list elements, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int n = 0;

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}

	return (n);
}
