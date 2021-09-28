#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabet lowercase, but not q and e, using putchar
 *
 * Return: will return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
