#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the previously allocated memory block
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 *
 * Return: pointer to the reallocated memory block
 *	NULL if new_size is zero and ptr is not NULL
 *	NULL if malloc fails to allocate memory
 *	ptr if new_size is equal to old_size
 *	Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);
	return (new_ptr);
}
