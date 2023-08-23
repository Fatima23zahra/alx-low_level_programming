#include "lists.h"

/**
 * dlistint_len - returns the number of elements dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
