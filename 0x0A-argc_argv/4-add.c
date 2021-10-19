#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: array of arguments passed from terminal
 * Return: On success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);

				}
			}

				sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
