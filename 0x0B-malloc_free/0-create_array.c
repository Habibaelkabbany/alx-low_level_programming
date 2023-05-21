#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *create_array - a function that allocates memory using malloc
 * @c: char to populate array
 * @size: size of array
 *
 * Return: pointer to a reserved memoru.
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

if (size == 0)
{
	return (NULL);
}
s = malloc(size);
if (s == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	s[i] = c;
}
return (s);
}
