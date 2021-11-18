#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

int copyContents(const char *filename1, const char *filename2);

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

copyContents(av[1], av[2]);


return (0);
}


/**
 * copyContents - copies contents from one file to another
 * @filename1: file name to be copied from
 * @filename2: file name to be copied to
 * Return: don't know yet
 */
int copyContents(const char *filename1, const char *filename2)
{

char buf[1024];
int fd;
int wr;
int length1 = 1024;
int fTo;
int closing;
int nchars;

fd = open(filename1, O_RDONLY);
fTo = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", filename1);
	exit(98);
}

if (fTo == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename2);
	exit(99);
}
nchars = 1024;
while (nchars == 1024)
{
	nchars = read(fd, buf, length1);
	if (nchars == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", filename1);
		exit(98);
	}
	wr = write(fTo, buf, nchars);
	if (wr == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}
}
closing = close(fd);

if (closing == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

closing = close(fTo);

if (closing == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fTo);
	exit(100);
}
return (0);


}
