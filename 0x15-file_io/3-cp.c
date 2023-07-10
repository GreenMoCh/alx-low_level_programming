#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - prints an error message
 *
 * @message: the error message to print
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * exit_with_error - exits the program with an error message
 *
 * @code: the error code to exit
 * @message: the message to print
 */
void exit_with_error(int code, const char *message)
{
	print_error(message);
	exit(code);
}

/**
 * copy_file - copies the content of a file to another file
 *
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int source, destination, bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];

	source = open(file_from, O_RDONLY);
	if (source == -1)
		exit_with_error(98, file_from);
	destination = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (destination == -1)
		exit_with_error(99, file_to);

	bytesRead = read(source, buffer, BUFFER_SIZE);
	while (bytesRead > 0)
	{
		bytesWritten = write(destination, buffer, bytesRead);
		if (bytesWritten == -1)
			exit_with_error(99, file_to);
	}

	if (bytesRead == -1)
		exit_with_error(98, file_from);
	if (close(source) == -1)
		exit_with_error(100, "Can't close source file descriptor");
	if (close(destination) == -1)
		exit_with_error(100, "Can't close destination file descriptor");
}

/**
 * main - entry oint of the program
 *
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, error otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit (97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
