#include "main.h"
/**
 * _isalpha - checks if c is lower or upper
 *
 * @c: number
 *
 * Return: this is what's supposed to be returned to main
 */

	int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
