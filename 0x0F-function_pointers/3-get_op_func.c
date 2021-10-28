#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3-calc.h"

/**
 * get_op_func - selects correct function to peform given operation from user
 * @s: first number
 * Return: the sum of a and b
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);

		}
		i++;
	}

	return ('\0');
}
