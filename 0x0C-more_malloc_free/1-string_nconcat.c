#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first str
 * @s2: second str
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the concat string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *concat_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc((s1_len + n + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
		concat_str[i++] = s2[j];
	concat_str[i] = '\0';
	return (concat_str);
}
