#include "main.h"
/**
 * puts2 - prints string, skips every other char
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
		{
		str++;
		}
	}
	_putchar('\n');
}
