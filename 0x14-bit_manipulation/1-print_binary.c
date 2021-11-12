#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number
 * Return: nothing
 */


void print_binary(unsigned long int n)
{


	int count = 0;

	while (count < 32)
	{
		if (n & 0X80000000)
			printf("1");
		else
			printf("0");
		n <<= 1;
		count++;
}
	printf("\n");


}
