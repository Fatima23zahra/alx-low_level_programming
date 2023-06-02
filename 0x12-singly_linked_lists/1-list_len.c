#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a list
 * @h: -> pointer to the list
 * Return: num of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
return (n);
}
