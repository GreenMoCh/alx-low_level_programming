#include <stddef.h>
#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given index
 *
 * @n: a ptr to the number
 * @index: the index of the bit to set
 *
 * Return: 1 if it works, -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = 1UL << index;
	*n |= mask;

	return (1);
}
