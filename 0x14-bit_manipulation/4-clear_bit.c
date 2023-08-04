#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *
 * @n: ptr to the num
 * @index: the index of bit
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ((unsigned long int)2 << index) - 2;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
