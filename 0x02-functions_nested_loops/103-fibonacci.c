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
long int x;
long int r;
x = 2;
n = 1;
printf("%ld, %ld", n, x);
while (r <= 4000000)
{

if (r > 4000000)
{
break;
}
if (r % 2 == 0)
{
r = n + x;
}
n = x;
x = r;
}
printf(", %ld", r);
printf("\n");
return (0);
}
