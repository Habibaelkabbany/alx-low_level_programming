#include <stdio.h>
#include "main.h"
/**
 * _strlen - gets length of string
 *@s: pointer to beginning of string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
int count;
char current;

count = 0;
while (current != '\0')
{
	count++;
	current = *(++s);
}
return (count);
}
