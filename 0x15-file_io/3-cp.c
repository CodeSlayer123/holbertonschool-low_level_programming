#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

int copyContents(const char *filename1, const char *filename2);

#define NAME_OF_THE_FILE av[1]
#define file_from av[1]
#define file_to av[2]
#define FD_VALUE fd
/**
 * main - copies contents from one file to another
 * @ac: argument count
 * @av: the arguments
 * Return: don't know yet
 */

int main(int ac, char **av)
{


if (ac != 3)
{
	dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
if (av[1] == NULL)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
	exit(98);
}

copyContents(av[1], av[2]);


return (1);
}


/**
 * copyContents - copies contents from one file to another
 * @filename1: file name to be copied from
 * @filename2: file name to be copied to
 * Return: don't know yet
 */
int copyContents(const char *filename1, const char *filename2)
{

char *buf[1024];
int fd;
int wr;
int rd;
int length1 = 1024;

if (filename1 == NULL || filename2 == NULL)
	return (-1);

fd = open(filename1, O_RDONLY);

if (fd == -1)
	return (-1);

rd = read(fd, buf, length1);
if (rd == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
	exit(98);
}
close(fd);

if (fd == '\0')
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n");
	exit(100);
}
fd = open(filename2, O_CREAT | O_RDWR | O_TRUNC, 664);

if (fd == -1)
	return (0);

wr = write(fd, buf, length1);
if (wr == -1 || fd == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
	exit(99);
}
close(fd);
if (fd == '\0')
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n");
	exit(100);
}
return (1);


}