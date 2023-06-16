#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 *
 * @c: the char to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (fwrite(&c, sizeof(char), 1, stdout));
}
