#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *
 * @array: Ptr to the first element of the array to search in
 * @size: size of the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
