#include "main.h"
/**
 * print_diagonal - print diagonal lines up to n
 *
 * @n: number of times _ is printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int line = 0;
	
	int space = 0;

	while (space < (n -1))
	  {
	    _putchar('_');
	
	while (line < n)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{

  	      
		_putchar('\\');
		line++;
		space++;
		
		    
		}
		_putchar('\n');	
	}
	
	}
	

}
