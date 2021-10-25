#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes being conatenated
 * @a: array
 * Return: pointer to allocated memory
 */

char *loop(char *a, char *s1, char *s2, unsigned int n);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	a = malloc((size1 + size2 + 1) * sizeof(char));
	if (a == NULL)
	{
		return ('\0');
	}
	loop(a, s1, s2, n);
	return (a);
}


/**
 * loop - loops the two strings
 * @a: array
 * @s1: first string
 * @s2: second string
 * @n: number of characters being concatenated
 * Return: array a
*/
char *loop(char *a, char *s1, char *s2, unsigned int n)
{
	int size2 = strlen(s2);
	int number = n;
	int i;
	unsigned int j;

	for (i = 0; s1[i] != '\0' ; i++)
	{
		a[i] = s1[i];
	}
	if (number >= size2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			a[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			a[i] = s2[j];
			i++;
		}
	}
	return (a);
}
