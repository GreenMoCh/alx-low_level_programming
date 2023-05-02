#include "lists.h"

/**
 * free_lstint - frees linked list
 *
 * @head: listint_t list to be freed
 *
 * Description: free a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
