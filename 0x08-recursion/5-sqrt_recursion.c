#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - gets a number to the root of another
 *@n: base number
 *
 * Return: resultant root
 */

int _sqrt_recursion(int n)
{
if (n >= 0)
{
return (_sqrt_helper(n, 0));
}
else
{
return (-1);
}
}
/**
 * _sqrt_helper - gets a number to the root of another
 *@n: base number
 *@y: divisor in question
 *
 * Return: resultant root
 */
int _sqrt_helper(int n, int y)
{
if (y == n / 2)
{
	return (-1);
}
else if ((y * y) == n)
{
	return (y);
}
else
{
	return (_sqrt_helper(n, y + 1));
}
}
