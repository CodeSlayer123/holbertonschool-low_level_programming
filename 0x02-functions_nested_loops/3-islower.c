#include "main.h"
/**
 * _islower - checks if c is lower or upper
 *
 * Return: this is what's supposed to be returned to main
 */

	int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
