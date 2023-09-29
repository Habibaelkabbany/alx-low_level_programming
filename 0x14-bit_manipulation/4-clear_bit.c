#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * clear_bit - clears a bit at a specified index
 * @n: pointer to decimal number
 * @index: the index to which a bit must be cleared
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int inverter = 0x01;

	inverter = ~(inverter << index);

	if (inverter == 0x00)
		return (-1);

	*n &= inverter;

	return (1);
}
