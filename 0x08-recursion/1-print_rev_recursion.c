#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints string recursively
 *@s: pointer to beginning of string
 */

void _print_rev_recursion(char *s)
{
char current;

current = *s;
if (current != '\0')
{
	_print_rev_recursion(++s);
	_putchar(current);
}
else if (current == '\n')
{
	_putchar('\n');
}
}
