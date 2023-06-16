#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to zero
 *
 * @nmemb: number of elements int he array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated, NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (unsigned char *)ptr;

	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
