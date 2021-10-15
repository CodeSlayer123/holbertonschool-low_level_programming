#include <stdio.h>
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: array of arguments passed from terminal
 * Return: On success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
