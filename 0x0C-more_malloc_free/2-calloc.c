#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array
 * @size: size of array
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	if (size < sizeof(int))
		size = 4;

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < nmemb; i++)
	{
		a[i] = 0;
	}

	return (a);
}
