#include "main.h"
/**
 * void more_numbers - prints 0 to 14 ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{

	int row;

	for (row = 0; row <= 9; row++)
	{
	int n;


		for (n = 0; n <= 14; n++)
		{
		int tens = n / 10;
		int ones = n % 10;

			if (n >= 10)
			{
			  _putchar('0' + tens);
			}			
		_putchar(ones + '0');	
		}

	_putchar('\n');
	}
}
