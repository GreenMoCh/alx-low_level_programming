#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 *
 * @h: ptr to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
