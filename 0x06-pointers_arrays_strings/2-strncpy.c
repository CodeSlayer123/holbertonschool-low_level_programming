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

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
