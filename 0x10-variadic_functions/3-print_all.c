#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: type of argument passed to function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	/*int j = 0; */
	/*char type[] = {'c', 'i', 'f', 's'};*/
	int n;
	const char *counter = format;

	n = strlen(format) - 1;
	va_start(args, format);
		while (*counter != '\0')
		{
			switch (*counter)
			{
			case 'c':
				putchar(va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				break;
			}
			if ((*counter == 'c' || *counter == 'i' || *counter == 'f' ||
				*counter == 's') && i < n)
			{
				printf(", ");
			}
			counter++;
			i++;
		}
	va_end(args);
	printf("\n");
}
