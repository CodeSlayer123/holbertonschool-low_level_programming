#include "main.h"
#include "holberton.h"
/**
 * reverse_array - reverses content of array of integers
 *
 * @a: the array of integers
 *
 * @n: number of elements in array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int first = 0;
	int tmp = 0;
	int last = n - 1;

	while (first != last && first < last)
	{
		tmp = a[first];
		a[first] = a[last];
		a[last] = tmp;
		first++;
		last--;
	}

}
