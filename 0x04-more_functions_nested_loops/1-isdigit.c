#include <stdio.h>
#include "main.h"
/**
 *_isdigit - checks if digit between 0 & 9
 *@c: The number to check
 *
 *Return: 1 if the number is true. 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
