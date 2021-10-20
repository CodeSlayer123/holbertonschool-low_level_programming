#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars, initialized with char
 * @size: size of array
 * @c: starting point of array
 * Return: pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	a = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
