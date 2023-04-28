#include <stdio.h>
#include "main.h"
/**
 *print_line - draws straight line
 *@n: The number to draw with
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
	_putchar('_');
}
_putchar('\n');

}
