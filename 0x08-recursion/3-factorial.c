#include <stdio.h>
#include "main.h"
/**
 * factorial - gets factorial of a number recursively
 *@n: number to get factorial of
 *
 * Return: resultant factorial
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
