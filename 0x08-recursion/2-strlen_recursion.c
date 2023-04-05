#include "main.h"

/**
 * _strlen_recursion - returns the legth of a string
 * @s: the string to be measured
 *
 * return: the legth of the string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
