#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (i = 0; i < (int)(sizeof(coins) / sizeof(coins)[0]); i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
