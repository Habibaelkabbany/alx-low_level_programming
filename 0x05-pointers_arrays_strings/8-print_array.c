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

printf("%d", a[0]);
for (i = 1; i < n; i++)
{
	printf(", %d", a[i]);
}
_putchar('\n');
}
