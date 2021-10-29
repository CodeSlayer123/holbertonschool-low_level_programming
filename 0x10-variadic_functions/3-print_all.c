#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
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
	int n;

	n = sizeof(format);
	va_start(args, n);
	while (i < n)
	{
		while (type[j] != '\0')
		{
			switch (type[j])
			{
			case 'c':
				printf("%s, ", va_arg(args, const char *));
				break;

			case 'i':
				printf("%d, ", va_arg(args, int));
				break;

			case 'f':
				printf("%f, ", va_arg(args, double));
				break;

			case 's':
	 			printf("%s, ", va_arg(args, const char *));
				break;

			}
		}

	}
	va_end(args);
	printf("\n");
}
