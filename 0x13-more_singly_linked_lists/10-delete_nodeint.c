#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 *
 * @head: ptr tothe ptr of the head node of the list
 * @index: index of the node to be deleted
 *
 * Retrun: 1 if succeeded, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
