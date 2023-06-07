#include "lists.h"
/**
 * free_listint_safe - free all elements in a linked list
 * @head: a pointer to the first node
 *
 * Description: This function frees each node in a linked list, stopping if
 * it encounters a loop. To identify a loop, it constructs it's own list,
 * and if memory allocation fails, it causes the process to terminate with
 * the status value 98
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *listint_head = NULL;
	listint_t *next;
	size_t size;

	if (!head)
		return (0);

	for (size = 0; *head; ++size)
	{
		if (listint_contains(listint_head, *head))
		{
			*head = NULL;
			break;
		}

		if (!add_nodeptr(&listint_head, *head))
		{
			exit(98);
		}

		next = (*head)->next;
		free(*head);
		*head = next;
	}

	return (size);
}
