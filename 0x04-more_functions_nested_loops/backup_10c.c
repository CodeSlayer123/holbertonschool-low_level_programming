#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{

	int row = size;
	int inner;
	int outer;
	/**	int hashtags; */

	for (outer = 0; outer < size; outer++)
	{
	int spaces = row - outer;


		for (inner = 0; inner <= spaces; inner++) 
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


