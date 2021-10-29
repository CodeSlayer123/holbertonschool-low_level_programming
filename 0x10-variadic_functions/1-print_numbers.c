#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
		printf("%d", va_arg(args, int));
		if (i != number - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
