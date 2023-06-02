#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements a linked list
 * @h: pointer to the list to print
 * Return: the num of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (s = 0; h != NULL; s++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

return (s);
}
