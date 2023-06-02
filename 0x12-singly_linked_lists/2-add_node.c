#include "lists.h"
#include <stdlib.h>

/**
 * add_node - insert a string at the beginning of the list
 * @head: a pointer to the address of the first list node
 * @str: the string to add to the list
 *
 * Return: If memory allocation fails, return NULL. Otherwise, return the
 * address of the new no
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node_tth = malloc(sizeof(list_t));

	if (added_node_tth == NULL)
		return (NULL);

	added_node_tth->str = strdup(str);
	added_node_tth->len = mblen;
	added_node_tth->next = *head;
	*head = added_node_tth;

	return (*head);
}
	
