#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a ptr to the new allocated space in memory
 *
 * @str: the string to be duplicated
 *
 * Return: pointer to duplicated string, otherwise NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc((strlen(str) + 1) * sizeof(char));
	if (dup != NULL)
		strcpy(dup, str);
	return (dup);
}
