#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of string
 *@str: pointer to beginning of string
 */

void puts_half(char *str)
{
int count, even, i;

for (count = 0 ; count >= 0; count++)
{
	if (str[count] == '\0')
	{
		break;
	}
}
even = count;
i = 0;
if (even % 2 == 0)
{
	for (i = count / 2; i < count; i += 1)
	{
		_putchar(str[i]);
	}
}
else
{
	for (i = 1 + ((count - 1) / 2); i < count; i += 1)
	{
		_putchar(str[i]);
	}
}
_putchar('\n');
}
