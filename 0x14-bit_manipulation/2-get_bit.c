#include <stdio.h>
#include "main.h"

/**
 * get_bit - return the value of a bit at given index
 *
 * @n: the number to extract bit
 * @index: the index of the bit
 *
 * Return: the value of the bit, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
