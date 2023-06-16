#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int multiply_numbers(const char *num1, const char *num2);
int is_valid_number(const char *num);

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int result;
	
	if (argc != 3)
		return (98);

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
		return (98);

	result = multiply_numbers(num1, num2);

	printf("%d\n", result);
	return (0);
}

int multiply_numbers(const char *num1, const char *num2)
{
	int product = atoi(num1) * atoi(num2);
	return (product);
}

int is_valid_number(const char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}
