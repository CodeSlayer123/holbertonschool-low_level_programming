#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabet lowercase using putchar
 *
 * Return: will return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
