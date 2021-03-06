#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: array of arguments passed from terminal
 * Return: On success
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (0);
}
