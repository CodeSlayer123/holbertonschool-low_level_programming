#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: file name
 * @letters: letters
 * Return: actual number of letters able to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

char *buf;
int fd;
int wr;
int rd;

if (filename == NULL || letters == '\0')
	return (0);

buf = malloc(sizeof(size_t) * letters);

if (buf == NULL)
	return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
	return (0);

rd = read(fd, buf, letters);


wr = write(STDOUT_FILENO, buf, rd);
close(fd);
free(buf);
return (wr);



}
