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
	int binaryNum[32];
	int i = 0;

	if (n == '\0' || index == '\0')
	{
		return (-1);
	}
	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	return (binaryNum[index]);
}
