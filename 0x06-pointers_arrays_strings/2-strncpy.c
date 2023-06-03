#include <stdio.h>
#include "main.h"
/**
 **_strncpy - copies a string to another
 *@src: pointer to 1st string
 *@dest: pointer to second string
 *@n: length of string taken from source
 *
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;
int j;

i = 0;


while (src[i] != '\0')
{
	i++;
}

for (j = 0; j < n; j++)
{
	dest[j] = src[j];
}
if (i < n)
	dest[j] = '\0';

return (dest);
}
