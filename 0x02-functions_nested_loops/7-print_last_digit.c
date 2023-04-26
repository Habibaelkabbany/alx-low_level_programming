#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints last digit of number
 *@n: The number to check
 *
 *Return: The last digit of a number
 */

int print_last_digit(int n)
{
int m;

if (n < 0)
{
m = (n * -1) % 10;
}
else
{
m = n % 10;
}
_putchar('0' + m);
return (m);
}
