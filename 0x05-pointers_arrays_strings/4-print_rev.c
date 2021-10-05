#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: string
 *
 * Return: Always 0
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s >= 0)
	{
	  
		_putchar(*s);
		s--;	
		
		if (*s == 0)
		  {
		    break;
		  }
		  
}
	_putchar('\n');
}
