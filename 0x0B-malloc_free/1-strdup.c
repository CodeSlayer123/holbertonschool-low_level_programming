#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	a = malloc((size + 1) * sizeof(char));

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
