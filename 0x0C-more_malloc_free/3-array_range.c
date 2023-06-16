#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of int
 *
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the newly created array, NULL if fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
