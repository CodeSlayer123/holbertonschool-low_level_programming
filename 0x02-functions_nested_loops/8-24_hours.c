#include "main.h"

/**
 * jack_bauer - prints clock in 24 hour time
 *
 * Return: this is what's supposed to be returned to main
 */

void jack_bauer(void)
{

	int hour;


	for (hour = 0; hour <= 23; hour++)
	{
	int minute = 0;

	for (minute = 0; minute <= 59; minute++)

	{
	int hourA = hour / 10;
	int hourB = hour % 10;
	int minuteA = minute / 10;
	int minuteB = minute % 10;

	_putchar('0' + hourA);
	_putchar('0' + hourB);
	_putchar(':');
	_putchar('0' + minuteA);
	_putchar('0' + minuteB);
	_putchar('\n');




	}
	}

	}
