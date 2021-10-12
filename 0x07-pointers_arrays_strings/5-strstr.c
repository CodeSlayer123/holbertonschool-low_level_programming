#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: string
 *
 * @needle: bytes
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{

	int i;
	int j = 0;

for (i = 0; haystack[i] != '\0'; i++)
{

	if (haystack[i] == needle[j])
	{
		return (haystack + i);
	}
}
	return ('\0');

}
