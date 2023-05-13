#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if lower case
 *@c: The character to check
 *
 *Return: 1 if the number is positive. 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
