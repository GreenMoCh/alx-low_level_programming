#include "main.h"

/**
 * _strlen_recursion - return the lenth of the str
 *
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
