#include "main.h"
#include "holberton.h"
/**
 * _strncpy - copies string
 *
 * @dest: first number
 *
 * @src: second number
 *
 *@n: number of bytes
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;
	int first = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{

		dest[first] = src[j];
		first++;
		j++;
	}


	return (dest);
}
