#include "main.h"
#include <stdio.h>

/**
 *  binary_to_uint - converts a binary string to a number
 * @b: string of chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int res;

	j = 0;
	i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	res = 0;
	i--;
	while (i >= 0)
	{
		res += (b[i] - '0') * powing(2, j);
		i--;
		j++;
	}
	return (res);
}
/**
 * powing - power
 * @b: base
 * @p: power
 *
 * Return: result of power
 */
int powing(int b, int p)
{
	int res;

	res = 1;
	while (p > 0)
	{
		res = res * b;
		p--;
	}
	return (res);
}
