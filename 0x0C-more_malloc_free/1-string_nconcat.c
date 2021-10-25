#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes being conatenated
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, size1, size2, s2length, number = n;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	s2length = size2;
	if (number < size2)
	{
		size2 = number;
	}
	a = malloc((size1 + size2 + 1) * sizeof(char));
	if (a == NULL)
	{
		return ('\0');
	}
	for (i = 0; s1[i] != '\0' ; i++)
		a[i] = s1[i];
	if (number >= s2length)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			a[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < number; j++)
		{
			a[i] = s2[j];
			i++;
		}
	}
		a[i] = '\0';
	return (a);
}
