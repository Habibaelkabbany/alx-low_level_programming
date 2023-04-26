#include <stdio.h>
#include "main.h"
/**
 *times_table - table 9
 */

void times_table(void)
{
int row;
int result;
row = 0;
while (row < 10)
{
int column;
column = 1;
_putchar('0');
_putchar(',');
while (column < 10)
{
	result = row *column;
	if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
	}
	else
	{
		_putchar(' ');
		_putchar('0' + result / 10);
		_putchar('0' + result % 10);
	}
	if (column == 9)
	{
		_putchar ('\n');
	}
	else
	{
		_putchar (',');
	}
	column++;
	}

row++;
}
}
