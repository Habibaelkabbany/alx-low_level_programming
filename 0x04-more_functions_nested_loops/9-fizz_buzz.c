#include <stdio.h>
#include "main.h"
/**
 *main - fizzing and buzzing
 *
 * Return: Always 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0)
	{
		printf("Fizz");
	}
	if (i % 5 == 0)
	{
		printf("Buzz");
	}
	printf(" ");
	if (i % 3 != 0 && i % 5 != 0)
	{
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
