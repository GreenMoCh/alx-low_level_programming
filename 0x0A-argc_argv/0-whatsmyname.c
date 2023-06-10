#include <stdio.h>
#include "main.h"

/**
 * main - prints the am of the program
 *
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
