#include <stdio.h>
#include "main.h"
/**
 * _abs - get absoulute of integer
 *@n: The number to check
 *
 *Return: The absolute of a number
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-1 * n);
}
}
