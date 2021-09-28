#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: will return 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	if (n <= '8')
	{

	putchar(',');
	putchar(' ');
	}

	}
	putchar('\n');

	return (0);
}
