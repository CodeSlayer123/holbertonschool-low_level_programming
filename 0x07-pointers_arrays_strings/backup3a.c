#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 *
 * @s: string
 *
 * @accept: bytes
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{

  int i;
  int j;
  int length = 0;

for (i = 0; s[i] != '\0'; i++)
    {
     for (j = 0; accept[j] != '\0'; j++)
       {
        if (s[i] == s[j])
          {
	    length++;
          }
       }
    }

	return (length);

}
