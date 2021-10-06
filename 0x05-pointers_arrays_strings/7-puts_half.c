#include "main.h"
/**
 * puts_half - prints second half of a string
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
  int a;
  int length;
  int even; 
  while (*str != '\0')
    {
      str++;
      length++;
    }
  str--;
  length--;
   even = length / 2; 
  while (*str >= 0)
    {
      str--;
    }

  
  for (a = even; a <= length; a++)
	{
	  _putchar(str[a]);
	  
	}
	_putchar('\n');
}
