#include <stdio.h>
#include "main.h"
/**
 * print_array - prints certain elements of array
 *@a: pointer to beginning of array
 *@n: number of elements to be printed
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	if (i ==  n - 1)
	{
		printf("%d", a[0]);
	}
	else
	{
		printf("%d, ", a[i]);
	}
}
printf("\n");
}
