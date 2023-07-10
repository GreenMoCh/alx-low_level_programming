#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creats a file with a given filename and given content
 *
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, bytesWritten, fileFlags, filePerms;

	if (filename == NULL)
		return (-1);

	fileFlags = O_WRONLY | O_CREAT | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR;
	file = open(filename, fileFlags, filePerms);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytesWritten = write(file, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
