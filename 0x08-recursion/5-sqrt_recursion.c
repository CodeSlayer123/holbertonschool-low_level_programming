#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * _sqrt - secondary function
 * @n: number
 * @tmp: original value of n
 * Return: returns outcome
 */
int _sqrt(int n, int tmp);

int _sqrt_recursion(int n)
{
	int tmp = 0;
	int result = _sqrt(n, tmp);

	return (result);
}

int _sqrt(int n, int tmp)
{

	tmp = n;

	if (n * n == tmp)
	{
		n = n;
		return (n);
	}

	_sqrt(n / 2, tmp);

	return (n);

}
