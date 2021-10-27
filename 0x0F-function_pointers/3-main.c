#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3-calc.h"

/**
 * main - multiplies, adds, subtracts, divide, or find remainder of two numbers
 * @s: first number
 * Return: sum of a and b
 */
int main (int argc, char *argv[])
{
	int sum;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	sum = get_op_func(argv[2]) (a, b));
	printf("%d\n", sum);

	return (0);
}
