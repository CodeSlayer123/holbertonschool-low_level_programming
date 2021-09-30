#include "main.h"
/**
 * times_table - prints times table
 *
 * Return: this is what's supposed to be returned to main
 */

void times_table(void)
{

	int product = 0;
	int row;


	for (row = 0; row < 10; row++)
	{

	int column = 0;

	for (column = 0; column <= 9; column++)
	{
	product = row * column;
	printCell(column, product);
	}
	_putchar('\n');

	}
	/* done with the row, so newline */



}

void printCell(int column, int product)
{

	int ones = product % 10;
	int tens = product / 10;

	if (column == 0)
	{
	_putchar('0');
	}
	else if (tens >= 1)
	{
	_putchar(' ');
	_putchar('0' + tens);
	_putchar('0' + ones);
	}

	else
	{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + ones);
	}

	if (column != 9)
	{
	_putchar(',');
	}

}
