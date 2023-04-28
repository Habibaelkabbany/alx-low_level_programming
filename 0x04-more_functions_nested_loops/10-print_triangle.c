#include <stdio.h>
#include "main.h"
/**
 *print_triangle - draws triangle
 *@size: The number to draw with
 */

void print_triangle(int size)
{
int i;
for (i = 1; i <= size; i++)
{
	int j;

	for (j = 0; j < size - i; j++)
	{
		_putchar(' ');
	}
	for (j = size - i; j < size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
