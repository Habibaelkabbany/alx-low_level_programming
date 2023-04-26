#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
int hours;

hours = 0;
while (hours < 24)
{
int minutes = 0;

while (minutes < 60)
{
	if (hours < 10)
	{
		_putchar('0');
		_putchar ('0' + hours);
	}
	else
	{
		_putchar ('0' + hours / 10);
		_putchar ('0' + hours % 10);
	}
	_putchar(':');
	if (minutes < 10)
	{
		_putchar('0');
		_putchar ('0' + minutes);
	}
	else
	{
		_putchar ('0' + minutes / 10);
		_putchar ('0' + minutes % 10);
	}
	_putchar('\n');
	minutes++;
}
hours++;
}
}
