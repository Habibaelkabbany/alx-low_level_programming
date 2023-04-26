#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet followed by a new line x10.
 */

void print_alphabet_x10(void)
{
int c = 0;
while (c < 10)
{
	print_alphabet();
	c++;
}
_putchar('\n');
}
