#include "main.h"
/**
 * _strpbrk - searches string for any of a set of bytes
 *
 * @s: string
 *
 * @accept: bytes
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
  char c;
  int i;
  int j;
  
  for (i = 0; s[i] != '\0'; i++)
    {
     for (j = 0; accept[j]; j++)
       {
	if (s[i] == s[j])
	  {
	   c = s[i];
	  }
       }
    }

  
   while (*s != c)
        {
                s++;
        }

        return (s);

	

}
