#include "main.h"
#include <stdio.h>
/**
 * void print_array - prints n number of elements of array
 *
 * @a: array
 *
 * @n: number of elements in array
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	while (*a <= n)
	{
	  printf("%d", *a);
		a++;
	}
	putchar('\n');
}
