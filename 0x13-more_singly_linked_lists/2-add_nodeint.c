#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginningof listint_t list
 *
 * @head: ptr to the ptr of the head node of the list
 * @n: vlue to be stored in the new node
 *
 * Return: the address of the new element, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
