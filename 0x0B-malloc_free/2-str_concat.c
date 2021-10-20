#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to array, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int j;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		s1 = " ";

	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	a = malloc((size1 + size2 + 1) * sizeof(char));

	if (a == NULL)
	{
		return ('\0');
	}


	for (i = 0; s1[i] != '\0' ; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	return (a);

}
