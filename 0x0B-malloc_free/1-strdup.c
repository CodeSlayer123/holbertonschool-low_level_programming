#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates array of chars, initialized with char
 * @str: string
 * Return: pointer to array, NULL if it fails
 */

char *_strdup(char *str)
{
	char *a;
	int i;
	int size;

	size = sizeof(str);
	a = malloc(size * sizeof(char));
	if (size == 0)
	{
		return ('\0');
	}

	if (a == NULL)
	{
		return ('\0');
	}


	for (i = 0; str[i] != '\0' ; i++)
	{
		a[i] = str[i];
	}
	return (a);

}
