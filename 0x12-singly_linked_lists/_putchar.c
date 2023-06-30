#include <stdio.h>

/**
 * _putchar - writes c to stdout
 *
 * @c: the char to be printed
 *
 * Return: void
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
