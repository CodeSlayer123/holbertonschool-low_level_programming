#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 *
 * @src: source copied from
 *
 * @n: number of byes copied
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
