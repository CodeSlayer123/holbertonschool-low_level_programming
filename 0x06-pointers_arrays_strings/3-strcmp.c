#include "main.h"
#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first number
 *
 * @s2: second number
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int compare;
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
	i++;
	}


	if (s1[i] == s2[i])
	{
		compare = 0;
	}
	else if (s2[i] > s1[i])
	{
		compare = -(s2[i] - s1[i]);
	}
	else
	{
		compare = s1[i] - s2[i];
	}

	return (compare);
}
