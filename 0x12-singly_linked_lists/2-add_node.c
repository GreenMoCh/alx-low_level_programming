#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a linked list
 *
 * @head: ptr to the head of theist
 * @str: str to be duplicated and added to the new node
 *
 * Return: address of the new element, NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_copy;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = strlen(str_copy);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
