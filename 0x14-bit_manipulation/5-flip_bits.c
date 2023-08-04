#include <stdio.h>
#include "main.h"

/**
 * flip_bits - return the number of bits needsd to flip
 *
 * @n: first num
 * @m: second num
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
