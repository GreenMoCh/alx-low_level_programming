#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 *
 * @b: ptr to binary string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (result);
}
