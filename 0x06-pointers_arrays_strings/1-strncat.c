#include <stdio.h>
#include "main.h"
/**
 **_strncat - concats two strings
 *@src: pointer to 1st string
 *@dest: pointer to second string
 *@n: length of string taken from source
 *
 * Return: final string
 */

char *_strncat(char *dest, char *src, int n)
{

int i;
int j;
int k;

i = 0;
k = 0;

while (src[i] != '\0')
{
	i++;
}
while (dest[k] != '\0')
{
	k++;
}
if (i < n)
{
	for (j = 0; j < n; j++)
	{
		dest[k] = src[j];
		k++;
	}
	dest[k] = '\0';
}
else
{
	for (j = 0; j < i ; j++)
	{
		dest[k] = src[j];
		k++;
	}
}

return (dest);
}
