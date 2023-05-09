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
int count;

for (count = 0 ; count >= 0; count++)
{
	if (a[count] == '\0')
	{
		break;
	}
}
if (n >= 0 && n <= count)
{
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	_putchar('\n');
}
}
