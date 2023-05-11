#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints string recursively
 *@s: pointer to beginning of string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
char current;

current = *s;
if (current != '\0')
{
	return (1 + _strlen_recursion(++s));
}
else
{
	return (0);
}
}
