#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - allocates memory for an array using malloc
 * @min: minimum
 * @max: maximum
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *a;
	int dif;
	int i;
	int j = 0;

	if (min > max)
	{
		return ('\0');
	}
	dif = max - min;
	a = malloc((dif + 1) * sizeof(int));

	if (a == NULL)
	{
		return ('\0');
	}
	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
