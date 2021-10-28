#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return ('\0');
	}

	f(name);



}
