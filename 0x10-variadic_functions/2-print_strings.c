#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	int number = n;


	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	for (i = 0; i < number; i++)
	{
		printf("%s", va_arg(args, const char *));

		if (i != number - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
