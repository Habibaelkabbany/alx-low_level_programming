#include <stdio.h>
#include "main.h"
/**
 **_strcat - concats two strings
 *@src: pointer to 1st string
 *@dest: pointer to second string
 *
 * Return: final string
 */

char *_strcat(char *dest, char *src)
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
for (j = 0; j < i; j++)
{
	dest[k] = src[j];
	k++;
}
dest[k] = '\0';

return (dest);
}
