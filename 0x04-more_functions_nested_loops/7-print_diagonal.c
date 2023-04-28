#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - draws diagonal
 *@n: The number to draw with
 */

void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
	int j;

	for (j = 1; j <  i; j++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
