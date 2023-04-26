#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks sign of number
 *@n: The number to check
 *
 *Return: 1 if the number is positive. 0 if the number is zero. -1 otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}
