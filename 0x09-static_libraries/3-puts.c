#include <stdio.h>
#include "main.h"
/**
 * _puts - prints string
 *@str: pointer to beginning of string
 */

void _puts(char *str)
{
char current;

current = *str;
while (current != '\0')
{
	_putchar(current);
	current = *(++str);
}
_putchar('\n');
}
