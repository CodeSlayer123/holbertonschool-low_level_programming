#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"


/**
 * set_bit - gets value of a bit at given index
 * @n: number
 * @index: index
 * Return: 1 if it workes or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int binaryNum[32] __attribute__ ((unused));
	int i = 0;
	int number = *n;

	if (n == NULL || index == '\0')
	{
		return (-1);
	}
	while (number > 0)
	{
		binaryNum[i] = number % 2;
		number = number / 2;
		i++;
	}
	binaryNum[index] = 1;
	return (1);
}
