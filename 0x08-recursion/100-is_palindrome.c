#include "main.h"

/**
 * is_palindrome - checks is a str is palindrome
 *
 * @s: the string
 * @i: iterator
 * @len: length
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of the str
 *
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character
 *
 * @s: the str
 * @i: iterator
 * @len: the length of str
 *
 * Return: 1 if str is palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
