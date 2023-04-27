#include <stdio.h>
#include "main.h"
/**
 *main - computes multiples of 3 & 5 under 1024
 *
 * Return: Always 0
 */

int main(void)
{
int x;
int sum;
sum = 0;
x = 1;
while (x < 1024)
{
	if (x % 3 == 0 || x % 5 == 0)
	{
		sum += x;
	}
	x++;

}
printf("%d\n", sum);
return (0);
}
