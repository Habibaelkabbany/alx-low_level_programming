#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * get_endianness - check if little or big endian
 *
 * Return: the converted number
 */
int get_endianness(void)
{
	unsigned int y;
	char *c;
	int z;

	y = 3;
	c = (char *) &y;
	z = (int) *c;
	if (z == 3)
		return (1);
	else
		return (0);
}
