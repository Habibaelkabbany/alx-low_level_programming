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
	static int printed;

	if (n == 0)
	{
		if (!printed)
			printf("0");
		printf("\n");
		return;
	}
	else
	{
		printed = 1;
		print_binary(n >> 1);
		printf("%lu", (n & 1));
	}
}
