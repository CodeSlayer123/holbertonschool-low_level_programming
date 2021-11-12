#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

int power(int x, unsigned int y);

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: points to string of 0s and 1s
 * Return: the converted number, or 0 if b is null or not a 1 or 0
 */


unsigned int binary_to_uint(const char *b)
{
	int dec = 0;
	int i;
	int rem;
	int n = atoi(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; n != 0; ++i)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * power(2, i);
	}



	return (dec);


}
/**
 * power - finds the power of int
 * @x: int
 * @y: int
 * Return: power
 */
	int power(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (power(x, y / 2) * power(x, y / 2));
	else
		return (x * power(x, y / 2) * power(x, y / 2));
}
