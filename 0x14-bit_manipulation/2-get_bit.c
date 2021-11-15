#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

int dectobinary(int n);
char *_strrev(char *str);
/**
 * get_bit - gets value of a bit at given index
 * @n: number
 * @index: index
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int temp = n >> index;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}


	return (temp & 1);
}
