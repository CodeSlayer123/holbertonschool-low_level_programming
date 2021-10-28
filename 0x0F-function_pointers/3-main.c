#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3-calc.h"

/**
 * main - multiplies, adds, subtracts, divide, or find remainder of two numbers
 * @argc: arg count
 * @argv: arg array
 * Return: sum of a and b
 */
int main(int argc, char *argv[])
{
	int sum;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*fun)(int, int);

	if (argc == 1)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
		*argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	fun = (get_op_func(argv[2]));

	sum = fun(a, b);
	printf("%d\n", sum);

	return (0);
}
