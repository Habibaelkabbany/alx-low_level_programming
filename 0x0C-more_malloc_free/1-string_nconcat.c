#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings.
 * @n: number of malloc
 * @s1: choice one of output
 * @s2: choice two of output
 *
 * Return: pointer to a reserved memoru.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int length1, length2, total, i;

length1 = count(s1);
length2 = count(s2);
if (n >= length2)
{
	total = length1 + length2;
}
else
{
	total = length1 + n;
}
s = malloc(total);
if (s == NULL)
{
	return (NULL);
}
else
{
	for (i = 0; i < total; i++)
	{
		if (i <= length1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[i - length1];
		}
	}
}
return (s);
}
/**
 * count - calculates length of string.
 * @s1: choice one of output
 *
 * Return: length of string.
 */
unsigned int count(char *s1)
{
unsigned int count;

count = 0;
for ( ; s1[count] != '\0'; count++)
{
	count++;
}
return (count);
}

