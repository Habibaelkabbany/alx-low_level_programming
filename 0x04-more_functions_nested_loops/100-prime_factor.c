#include <stdio.h>
#include "main.h"
/**
 *_isprime - checks if number is prime
 *@x: number to be checked
 *
 * Return: 1 if prime. 0 otherwise
 */
int _isprime(long int x)
{
long int z;
for (z = 2; z <= x / 2; z++)
{
	if (x % z == 0)
	{
		return (0);
	}
}
return (1);
}

/**
 *main - find largest prime factor
 *
 * Return: Always 0
 */

int main(void)
{
long int i;
long int max;

for (i = 2; i <= 612852475143 / 2; i++)
{
	if (612852475143 % i == 0)
	{
		if (_isprime(i) == 1)
		{
			max = i;
		}
	}
}
printf("%ld", max);
printf("\n");
return (0);
}
