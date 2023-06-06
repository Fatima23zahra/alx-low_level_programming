#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a given index of a linked list
 * @head: a pointer to the first node
 * @index: the index of the desired node (starting at 0)
 *
 * Return: pointer to the node were looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp);
}
