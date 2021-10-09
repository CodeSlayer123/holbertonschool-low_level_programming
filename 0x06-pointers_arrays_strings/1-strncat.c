#include "main.h"
#include "holberton.h"
/**
 * _strncat - concatenates two strings, limits src to n bytes
 *
 * @dest: first number
 *
 * @src: second number
 *
 *@n: number of bytes
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{

		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
