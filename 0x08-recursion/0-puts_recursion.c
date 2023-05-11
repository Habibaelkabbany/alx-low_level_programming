#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints string recursively
 *@s: pointer to beginning of string
 */

void _puts_recursion(char *s)
{
char current;

current = *s;
if (current != '\0')
{
	_putchar(current);
	_puts_recursion(++s);
}
else
{
	_putchar('\n');
}
}
