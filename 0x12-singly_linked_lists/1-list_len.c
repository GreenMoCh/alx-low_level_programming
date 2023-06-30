#include <stddef.h>
#include "lists.h"

/**
 * list_len - Return the num of elements in a linked list
 *
 * @h: ptr to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
