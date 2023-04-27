#include <stdio.h>
#include "main.h"
/**
 *print_times_table - different times table
 *@n: number of times table
 *
 * Return: times table of n
 */

void print_times_table(int n)
{
int row;
int result;
int column;
if (n >= 0 && n <= 15)
{
	for (row = 0; row < n + 1 ; row++)
	{
		_putchar('0');
		for (column = 1; column < n + 1; column++)
		{
			result = row * column;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
			}
			_putchar('0' + result % 10);
			if (column == n)
			{
				_putchar ('\n');
			}
		}
	}
}
}
