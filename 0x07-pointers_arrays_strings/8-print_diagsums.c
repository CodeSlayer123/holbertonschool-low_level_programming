#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square
 *
 * @a: number of rows
 *
 * @size: size
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int suma = 0;
	int sumb = 0;
	int *b = a;

	for (i = 0; i < size; i++)
	{
		suma += a[i];
		a += size;
	}

	printf("%i, ", suma);

	for (i = size - 1 ; i >= 0; i--)
	{
		sumb += b[i];
		b += size;
	}
	printf("%i\n", sumb);
}
