#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *_calloc - a function that allocates memory using malloc
 * @nmemb: number of elementss
 * @size: size of 1 element
 *
 * Return: pointer to a reserved memoru.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
s = malloc(nmemb * size);
if (s == NULL)
{
	return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
	s[i] = 0;
}
return (s);
}
