#include <stdio.h>

/**
 * main -  prints required, followed by a new line using puts().
 * Return: integer Zero
 */
int main(void)
{
int n;
n = 0;
while (n <= 9)
{
	printf("%d", n);
	n++;
}
putchar('\n');
return (0);
}
