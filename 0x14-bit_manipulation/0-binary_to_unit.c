#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int sum;
	unsigned int i;
	unsigned int j;

	if (b == NULL)
		return (0);
	sum = 0;
	i = 0;

	while (b[i] != '\0')
		i++;
	if (i == 0)
		return (0);

	j = i - 1;
	i = 1;

	for (; j > 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if (b[j] == '1')
			sum += i;
		i *= 2;
	}
	sum += (b[0] - '0') * i;
	return (sum);
}
