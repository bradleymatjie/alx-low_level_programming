#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends a text at the end of a file.
 * standard output
 * @filename: name of the file to append
 * @text_content: NULL terminates string to write to the file
 * Return: 1 success, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write, lenght;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, 0_WRONLY | 0_APPEND);
		if (fd == -1)
			return (-1);
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(fd, text_content, lenght);
		if (res_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
