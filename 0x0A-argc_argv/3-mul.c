#include <stdio.h>
#include <stdlib.h>

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
int x;

if (argc < 3)
{
	printf("%s\n", "Error");
	return (1);
}
else
{
	x = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", x * i);
}
return (0);
}
