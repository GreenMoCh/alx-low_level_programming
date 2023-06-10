#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 *
 * @argc: number of comand-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
