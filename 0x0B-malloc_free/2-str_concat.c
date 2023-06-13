#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first str
 * @s2: the second str
 *
 * Return: pointer to the new allocated concat str, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *concat;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat != NULL)
	{
		strcpy(concat, s1);
		strcpy(concat, s2);
	}
	return (concat);
}
