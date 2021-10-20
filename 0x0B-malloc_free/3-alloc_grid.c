#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array  of ints
 * @width: width
 * @height: height
 * Return: pointer to array, NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width == 0)
	{
		return ('\0');

	}
	if (height == 0)
	{
		return ('\0');
	}

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(a[i]);
		}
			
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);

}
