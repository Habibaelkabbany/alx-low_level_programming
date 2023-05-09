#include <stdio.h>
#include "main.h"
/**
 * rev_string - makes string in reverse
 *@s: pointer to beginning of string
 */

void rev_string(char *s)
{
int count, i, j;
char *str, current;

for (count = 0 ; count >= 0; count++)
{
	if (s[count] == '\0')
	{
		break;
	}
}
str = s;
i = 0;
while (i < (count - 1))
{
	for (j = i + 1; j > 0; j--)
	{
		current = *(str + j);
		*(str + j) = *(str + (j - 1));
		*(str + (j - 1)) = current;
	}
	i++;
}

}
