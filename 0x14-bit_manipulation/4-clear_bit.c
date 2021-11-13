#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"


/**
 * clear_bit - gets value of a bit at given index
 * @n: number
 * @index: index
 * Return: 1 if it workes or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index == '\0')
	{
		return (-1);
	}
	*n = (0 << index) | *n;
	return (1);
}
