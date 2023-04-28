#include <stdio.h>
#include "main.h"
/**
 *print_square - draws a square
 *@size: The number to draw with
 */

void print_square(int size)
{
int i;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
	int j;

	for (j = 1; j <=  size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
