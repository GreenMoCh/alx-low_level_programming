#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: ptr to the number
 * @index: the index of the bit
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ((unsigned long int)2 << index) - 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (mask ^ ((*n >> index) & 1));
	return (1);
}
