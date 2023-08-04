#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary of a num
 *
 * @n: the binary to print
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag)
			putchar('0');
		shift--;
	}
	if (!flag)
		putchar('0');
}
