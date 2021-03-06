#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Create a file
 * standard output
 * @filename: name of the file to create
 * @text_content: NULL terminates string to write to the file
 * Return: 1 for success, -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		res_write = write(fd, text_content, length);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
