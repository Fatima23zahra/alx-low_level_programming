#include "lists.h"

/**
 * print_dlistint - function print doubly linked list
 * @h: poiner to the head of the list
 *
 * Return: number of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
