#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: this is what's supposed to be returned to main
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
