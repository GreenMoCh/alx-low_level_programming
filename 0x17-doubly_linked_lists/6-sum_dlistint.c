#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of the list
 *
 * @head: ptr to the head of the list
 *
 * Return: sum of all data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
