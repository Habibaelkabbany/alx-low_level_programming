#include <stdio.h>
#include "main.h"
/**
 *main - fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
int n;
int c;
int x;
int r;
x = 2;
n = 1;
printf("%d, %d", n, x);
for (c = 2; c < 50; c++)
{
r = n + x;
printf(", %d", r);
n = x;
x = r;
}
return (0);
}
