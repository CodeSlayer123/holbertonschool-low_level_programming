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
	char n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
