#include <stdio.h>

/**
 * main -  prints required, followed by a new line using puts().
 * Return: integer Zero
 */
int main(void)
{
int n;
n = 'z';
while (n >= 'a')
{
	putchar(n);
	n++;
}
putchar('\n');
return (0);
}
