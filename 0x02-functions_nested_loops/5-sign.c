#include "main.h"
/**
 * print_sign - checks if n is equal, greater to, or less than zero
 *
 * @n: number
 *
 * Return: this is what's supposed to be returned to main
 */

	int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}

	else if (n < 0)
	{
	_putchar('-');
	return (0);
	}
}
