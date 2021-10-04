#include "main.h"
/**
 * print_diagonal - print diagonal lines up to n
 *
 * @n: number of times _ is printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int outer;
	int inner;

if (n <= 0)
{
_putchar('\n');
}
else
{
	for (outer = 0; outer < n; outer++)
	{

		for (inner = 0; inner < outer; inner++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
}
