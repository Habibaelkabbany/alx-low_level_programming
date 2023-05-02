#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 *@s: pointer to beginning of string
 */

void print_rev(char *s)
{
char current;
int count;

count = 0;
current = *s;
while (current != '\0')
{
	count++;
	current = *(++s);
}
while (count > 0)
{
	_putchar(*(--s));
	count--;
}
_putchar('\n');
}
