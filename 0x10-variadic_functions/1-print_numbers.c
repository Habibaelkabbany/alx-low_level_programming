#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all ints
 * @n: number of args
 * @...: ellips to signify numerous args
 * @separator: seperating string
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
i = 0;

while (i < n)
{
	printf("%d", va_arg(args, int));
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	i++;
}
printf("\n");
va_end(args);
}
