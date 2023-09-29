#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * flip_bits - determine number of bits you need to make 2 nums alike
 * @n: number numero uno
 * @m: number numero duos
 *
 * Return: 1 or -1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int toFlip;

	for (toFlip = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			toFlip++;
	}

	return (toFlip);
}
