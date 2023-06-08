#include "main.h"

/**
 * is_prime_number - check if the number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwide 0
 */
int is_prime_number_helper(int i, int n);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <=  3)
		return (1);
	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - check if n is prime number
 *
 * @i: the dividor to check with
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwide 0
 */
int is_prime_number_helper(int i, int n)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_number_helper(n, i + 1));
}
