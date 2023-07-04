#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of the linked list
 *
 * @head: ptr to the head node of the list
 * @index: index of the node to be returned, starting at 0
 *
 * Return: ptr to the nth node, NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
