#include <stdio.h>
#include "main.h"
/**
 *main - fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
long int n;
int c;
long int x;
long int r;
x = 2;
n = 1;
printf("%ld, %ld", n, x);
for (c = 2; c < 96; c++)
{
r = n + x;
printf(", %ld", r);
n = x;
x = r;
}
printf("\n");
return (0);
}
