#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @separator: string to be printed between numbers
 * @format: number of integers passed to function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char type[] = {'c','i','f','s','\0'};


	va_start(args, n);
	while (i < number)
	{
		while (type < 4)
			if (j == *format)
			{
				printf("%s, ", va_arg(args, const char *));
				i++;
				j++;
			}

	}
	va_end(args);
	printf("\n");
}
