#include <stdio.>

/**
 * main - Prints the lowercase alphabet in reserve.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
