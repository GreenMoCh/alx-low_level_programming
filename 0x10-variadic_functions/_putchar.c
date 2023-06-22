#include <stdio.h>

/**
 * _putchar - writes the char c to stdout
 *
 * @c: the char c to print
 *
 * Return: 1 on success, -1on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
