#include <stdio.h>
#include "main.h"
/**
 *print_line - draws straight line
 *@n: The number to draw with
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
	_putchar('_');
}
_putchar('\n');

}
