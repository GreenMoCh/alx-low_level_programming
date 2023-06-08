#include "main.h"

/**
 * _pow_recursion - the value of x raised to the pow of y
 *
 * @x: value to raise
 * @y: the power
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
