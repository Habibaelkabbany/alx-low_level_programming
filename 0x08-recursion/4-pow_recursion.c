#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - gets a number to the power of another
 *@x: base number
 *@y: index number
 *
 * Return: resultant power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, (y - 1)));
}
}
