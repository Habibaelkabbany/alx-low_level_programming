#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all ints
 * @n: number of args
 * @...: ellips to signify numerous args
 *
 * Return: sum of numerous numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int sum;
unsigned int i;

va_start(args, n);
sum = 0;
i = 0;
if (n == 0)
	return (0);
while (i < n)
{
	sum += va_arg(args, int);
	i++;
}
va_end(args);
return (sum);
}
