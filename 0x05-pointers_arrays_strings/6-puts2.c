#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of string
 *@str: pointer to beginning of string
 */

void puts2(char *str)
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
for (i = 0; i < count - 1; i += 2)
{
	_putchar(str[i]);
}
if (even % 2 != 0)
{
	_putchar(str[even - 1]);
}
}
