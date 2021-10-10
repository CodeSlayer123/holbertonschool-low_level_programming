#include "main.h"
#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @ch: character
 *
 * Return: Always 0
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i  - 1] == ' ' || ch[i  - 1] == '\t' || ch[i  - 1] == '\n' ||
		ch[i  - 1] == ','	|| ch[i  - 1] == ';' || ch[i  - 1] == '.' ||
		ch[i  - 1] == '!' || ch[i  - 1] == '?' || ch[i  - 1] == '"' ||
		ch[i  - 1] == '(' || ch[i  - 1] == ')' || ch[i  - 1] == '{' ||
		ch[i  - 1] == '}')
		{
			if (ch[i] >= 'a' && ch[i] <= 'z')
			{
				ch[i] -=  32;
			}
	}
	i++;
	}

	return (ch);
}
