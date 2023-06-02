#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to the front of the
 * @head: address of head | first node
 * @str: second node
 * Return: Replaces old head address with
 * newly created node address
 */

list_t *add_node(list_t **head, const char *str)
{
	/* allocating space for the new node */
	/* tth = to the header */
	list_t *added_node_tth = malloc(sizeof(list_t));

	if (added_node_tth == NULL)
		return (NULL);

	added_node_tth->str = strdup(str);
	added_node_tth->len = strlen(str);
	added_node_tth->next = *head;
	*head = added_node_tth;

	return (*head);
}
