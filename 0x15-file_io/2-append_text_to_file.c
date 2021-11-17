#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text and end of a file
 * @filename: file name
 * @text_content: content of text
 * Return: 1 on success, -1 on faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int wr;
	int length;
	int fd;

	length = strlen(text_content);
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content !=  NULL)
	{
		wr = write(fd, text_content, length);
	}

	if (wr == -1)
		return (-1);

	close(wr);


return (1);

}
