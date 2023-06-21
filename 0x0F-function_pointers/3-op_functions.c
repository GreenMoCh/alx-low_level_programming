#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the dif of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: the dif of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of a / b
 *
 * @a: first int
 * @b: second int
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the rest of a by b
 *
 * @a: first int
 * @b: second int
 *
 * Return: rest of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
