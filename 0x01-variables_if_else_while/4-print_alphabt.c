#include <stdio.h>

/**
 * main -  prints required, followed by a new line using puts().
 * Return: integer Zero
 */
int main(void)
{
int n;
n = 'a';
while (n <= 'z')
{
	if (n == 'e' || n == 'q')
	{
		n++;
	}
	else
	{
		putchar(n);
		n++;
	}
}
putchar('\n');
return (0);
}
