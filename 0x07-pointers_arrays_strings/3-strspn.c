#include "main.h"
#include <stdio.h>
/**
 * _strspn - counts length of prefix of ref
 *@s: pointer to start of string
 *@accept: pointer to start of reference string
 *
 * Return: length of prrefix
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int count;
char current;
unsigned int compare;
int j;

current = s[0];
count = 0;
for (i = 0; current != '\0'; i++)
{
	current = s[i];
	compare = count;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (current == accept[j])
		{
			count++;
			break;
		}
	}
	if (compare == count)
	{
		return (count);
	}
}
return (count);
}
