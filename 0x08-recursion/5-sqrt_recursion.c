#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: the result
 */
int help_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (help_sqrt_recursion(n, 0));
}

/**
 * help_sqrt_recursion - find the square root
 *
 * @n: the number
 * @i: iterator
 *
 * Return: the result
 */
int help_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (help_sqrt_recursion(n, i + 1));
}
