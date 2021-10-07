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
  int i;

  for (i = 0; i < n; i++)
	{
	  if (i != n - 1)
	    {
	  printf("%d, ", a[i]);
	    }
	  else
	    {
	      printf("%d", a[i]);
	    }
	}
	putchar('\n');
}
