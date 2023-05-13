#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 *@s: pointer to start of string
 *@c: char to be found
 *
 * Return: pointer to where first located
 */

char *_strchr(char *s, char c)
{
unsigned int i;
char current;

for (i = 0; current != '\0'; i++)
{
	current = s[i];
	if (current == c)
	{
		return (&s[i]);
	}
}

return (NULL);
}
