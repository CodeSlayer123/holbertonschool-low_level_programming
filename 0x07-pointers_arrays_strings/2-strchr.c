#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character being looked for
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	
	while (*s != c)
	{
		s++;
	}
		if (*s != c)
		{
			*s = '\0';
		}

	return (s);
}
