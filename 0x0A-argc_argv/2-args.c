#include <stdio.h>

/**
 * main - prints the name of the program
 *@argc: count of argmunets
 *@argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}

return (0);
}
