#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

int countSetBits(int n);


/**
 * flip_bits - gets number of bits needed to flip n to m
 * @n: first number
 * @m: second number
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{


	return (countSetBits(n ^ m));


}
/**
 * countSetBits - count set bits
 * @n: number
 * Return: count
 */
	int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
