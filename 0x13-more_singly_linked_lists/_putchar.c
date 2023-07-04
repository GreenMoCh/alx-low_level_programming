#include <stdio.h>

/**
 * _putchar - writes c to stdout
 *
 * @c: the char to print
 *
 * Return: void
 */
void _putchar(char c)
{
	return (writes(1, &c, 1));
}
