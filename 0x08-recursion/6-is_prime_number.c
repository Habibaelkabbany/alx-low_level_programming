#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - checks if number is prime
 *@n: base number
 *
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
if (n >= 2)
{
return (_prime_helper(n, n - 1));
}
else
{
	return (0);
}
}
/**
 * _prime_helper - gets a number to the root of another
 *@n: base number
 *@y: divisor in question
 *
 * Return: resultant root
 */
int _prime_helper(int n, int y)
{
if (y == 1)
{
	return (1);
}
else if (n % y == 0)
{
	return (0);
}
else
{
	return (_prime_helper(n, y - 1));
}
}
