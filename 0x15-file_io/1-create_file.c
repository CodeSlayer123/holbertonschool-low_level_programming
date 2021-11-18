#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of text
 * Return: 1 on success, -1 on faillure
 */
int create_file(const char *filename, char *text_content)
{
	int wr;
	int length;
	int fd;

	if (text_content == NULL)
	{
		text_content = "";
	}

	length = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
		wr = write(fd, text_content, length);

	if (wr == -1)
		return (-1);

	close(fd);
return (1);



}
