#include "main.h"
/**
 * print_last_digit - prints last digit of number
 *
 * @n: number
 *
 * Return: this is what's supposed to be returned to main
 */

	int print_last_digit(int n)
	{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
	lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);

	return (lastDigit);


	}
