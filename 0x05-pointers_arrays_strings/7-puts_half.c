#include "main.h"
/**
 * puts_half - prints second half of string
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts_half(char *str)
{

  int i;
  int halfway;
  int length;
  while (*str != '\0')
    {
      length++;
      str++;
    }

  for (i = length; i<=0;  i--)
    {
      str--;
    }


  if (length % 2 == 0)
    {
      halfway = length / 2;
    }
  else
    {
      halfway = (length + 1) / 2;
    }
  
  for (i = 0; i <= length; i++)
    {
      if (i > halfway)
	{
	  _putchar(*str);
	}
      str++;
    }

  _putchar('\n');

  
}
