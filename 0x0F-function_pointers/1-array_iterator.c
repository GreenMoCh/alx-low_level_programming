#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of array
 *
 * @array: the array to iterate over
 * @size: the size of array
 * @action: ptr to function to execute on each element
 *
 * Description: the function iterates over each element of the array and
 *	applies the provided function to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
