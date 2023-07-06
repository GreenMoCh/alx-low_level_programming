#include "main.h"

/**
 * get_bit - give the value of a bit at agiven index
 *
 * @n: number
 * @index: index of the bit to retrieve
 *
 * Return: the value of the bit, -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	bit = n & mask;

	return (bit != 0);
}
