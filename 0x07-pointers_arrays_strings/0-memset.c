#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: array
 *
 * @b: byte
 *
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
