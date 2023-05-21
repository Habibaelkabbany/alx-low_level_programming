#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *array_range - a function that allocates memory using malloc
 * @min: minimum of range of values to be inserted
 * @max: maximum of range of values to be inserted
 *
 * Return: pointer to a reserved memoru.
 */
int *array_range(int min, int max)
{
int *s;
unsigned int i;

if (min > max)
{
	return (NULL);
}
s = malloc(sizeof(int) * (max - min + 1));
if (s == NULL)
{
	return (NULL);
}
for (i = 0; min <= max ; min++)
{
	s[i] = min;
	i++;
}
return (s);
}
