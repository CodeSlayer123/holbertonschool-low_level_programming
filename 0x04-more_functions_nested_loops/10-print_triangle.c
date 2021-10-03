#include "main.h"
/**
 * print_triangle -  prints traignle
 *
 * @size: size of triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{

	int outer;
	int inner;

if (size <= 0)
{
_putchar('\n');
}
else
{

	for (outer = 0; outer < size; outer++)
	{

		for (inner = outer; inner < size; inner++)
		{
		_putchar(' ');
		}

		for (inner = 0; inner <= outer; inner++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}

	}
}
