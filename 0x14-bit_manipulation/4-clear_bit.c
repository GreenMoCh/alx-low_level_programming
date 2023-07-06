#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sete the value of a bit to 0 at given index
 *
 * @n: ptr to the number
 * @index: the index of bit to clear
 *
 * Return: 1 if it work, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
