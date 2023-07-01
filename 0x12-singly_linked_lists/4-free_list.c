#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: ptr to the head of the list
 *
 * Description: a function that frees a linked list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
