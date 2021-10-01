#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 *
 * @n: number
 *
 * Return: this is what's supposed to be returned to main
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
			printf("%i", n);
			n++;
			}
			else
			{
			printf("%i, ", n);
			n++;
			}
		}
		putchar('\n');
	}
	else if (n == 98)
	{
	printf("%i\n", n);
	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
			printf("%i", n);
			n--;
			}
			else
			{
			printf("%i, ", n);
			n--;
			}
		}
		putchar('\n');
	}
}
