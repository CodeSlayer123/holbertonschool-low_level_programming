#include "main.h"
/**
 * print_line - prin underscore lines up to n
 *
 * @n: number of times _ is printed
 *
 * Return: Always 0.
 */

void print_line(int n)
{

	int line = 0;

	while (line < n)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{
		_putchar('_');
		line++;
		}
	}
	_putchar('\n');

}
