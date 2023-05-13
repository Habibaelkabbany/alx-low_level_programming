#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - gets substring of accept in s
 *@s: pointer to start of string
 *@accept: pointer to start of reference string
 *
 * Return: length of prrefix
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i;
char current;
int j;

current = s[0];
for (i = 0; current != '\0'; i++)
{
	current = s[i];
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (current == accept[j])
		{
			return (&s[i]);
		}
	}
}
return (NULL);
}
