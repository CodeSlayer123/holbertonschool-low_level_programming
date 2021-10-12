#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: first number
 * @y: second number
 * Return: returns outcome
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, y - 1);

	return (x);

}
