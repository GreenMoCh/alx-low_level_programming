#include <stdio.h>

/**
 * _putchar - writes the char c to stdout
 *
 * @c: the char to print
 *
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
