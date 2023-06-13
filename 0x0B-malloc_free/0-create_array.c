#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of chars and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
