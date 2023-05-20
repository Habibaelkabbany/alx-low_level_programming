#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of malloc
 *
 * Return: pointer to a reserved memoru.
 */
void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(b);
if (s == NULL)
{
	exit(98);
}
return (s);
}
