#include <stdio.h>
#include "main.h"
/**
 * *_memset - replaces certain places with char
 *@s: pointer to start mem address
 *@b: char to replace with
 *@n: number of times im going to replace
 *
 * Return: pointer to mem area a
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(s++) = b;
}
return (s);
}
