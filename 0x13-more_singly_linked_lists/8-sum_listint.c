#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 *
 * @head: ptr to the head node of the list
 *
 * Return: sum of all data in the list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
