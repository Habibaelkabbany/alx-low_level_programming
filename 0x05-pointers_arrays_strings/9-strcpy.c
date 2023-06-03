#include <stdio.h>
#include "main.h"
/**
 *_strcpy - copies one string to another
 *@src: pointer to 1st string
 *@dest: pointer to second string
 *
 * Return: final string
 */

char *_strcpy(char *dest, char *src)
{

int i;
int j;

i = 0;
while (src[i] != '\0')
{
	i++;
}
for (j = 0; j < i; j++)
{
	dest[j] = src[j];
}
dest[j] = '\0';

return (dest);
}
