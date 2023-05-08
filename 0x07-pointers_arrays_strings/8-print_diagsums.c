#include "main.h"
/**
 * print_diagsums - printssum of two diagonals
 *@a: pointer to start of 2d array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int sumR, sumL;

sumL = 0;
sumR = 0;

for (i = 0; i < size; i++)
{
	sumR +=  a[i * size + i];
}
for (j = size - 1; j >= 0; j--)
{
	sumL +=   a[j * size + (size - j - 1)];
}
printf("%d, %d", sumR, sumL);
_putchar('\n');

}
