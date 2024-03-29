#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * print_binary - print binary rep
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
