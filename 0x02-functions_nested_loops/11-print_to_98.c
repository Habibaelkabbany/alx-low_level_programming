#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - get absoulute of integer
 *@n: The number to check
 */

void print_to_98(int n)
{
int temp;

if (n < 98)
{
	for ( ; n < 98; n++)
	{
		if (n < 0)
		{
			_putchar('-');
			temp = n * -1;
		}
		else
		{
			temp = n;
		}
		if (temp < 10)
		{
			_putchar('0' + temp);
		}
		else
		{
			_putchar('0' + temp / 10);
			_putchar('0' + temp % 10);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
else
{
	for ( ; n > 98; n--)
	{
		if (n < 100)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('0' + n / 100);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
}
