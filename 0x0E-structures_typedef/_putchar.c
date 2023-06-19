#include <stdio.h>

/**
 * _putcahr - writes the char c to stdout
 *
 * @c: the char to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
