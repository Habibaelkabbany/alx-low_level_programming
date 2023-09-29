#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * set_bit - sets a bit to 1 at a specified index
 * @n: pointer to decimal number
 * @index: the index to which a bit must be set
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
