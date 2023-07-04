#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: ptr to the ptr of the head node of the list
 * @n: value to be stored in the new node
 *
 * Return: address of the new node, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position in list
 *
 * @head: ptr to the ptr of the head node of the list
 * @n: value to be stored in the new node
 * @idx: index where the new node should be added
 *
 * Return: address of the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
