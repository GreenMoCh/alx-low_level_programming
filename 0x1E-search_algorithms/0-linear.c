#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in array
 *
 * @array: Ptr to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: The 1st index where the value is located, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
