#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - copies string into another
 *@dest: pointer to start dest mem address
 *@src: pointer to start src address
 *@n: number of times im going to replace
 *
 * Return: pointer to mem area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

return (dest);
}
