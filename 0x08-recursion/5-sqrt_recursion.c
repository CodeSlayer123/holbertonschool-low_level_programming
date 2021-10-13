#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * @tmp: original value of n
 * Return: returns outcome
 */
int _sqrt(int n, int tmp);
int _sqrt_recursion(int n)
{
	int tmp = 1;
	int result = _sqrt(n, tmp);

		return (result);
}

/**
 * _sqrt - secondary function
 * @n: number
 * @tmp: original value of n
 *Return: returns square root to primary function
 */
int _sqrt(int n, int tmp)
{
	int var;

	if (n < 0)
	{
		return (-1);
	}

	if (tmp * tmp == n)
	{
		return (tmp);
	}
	else if (tmp * tmp > n)
	{
		return (-1);
	}
	tmp++;
	var = _sqrt(n, tmp);
	return (var);

}
