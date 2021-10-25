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

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return ('\0');
	}
	return (a);
}
