#include "main.h"
#include "holberton.h"
/**
 * char *string_toupper - changes all lowercase letters to uppercase
 *
 *@ch: character
 *
 * Return: Always 0
 */

char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
		ch[i] -=  32;
		}
	i++;
	}

	return (ch);
}
