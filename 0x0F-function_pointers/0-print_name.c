#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Printing a name
 *
 * @name: the name to be prited
 * @f: ptr to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
