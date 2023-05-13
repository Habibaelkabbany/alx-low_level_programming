#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * checkifNum - checks if string is digit
 *@s: string
 *
 * Return: 1 if number.0 otherwise
 */
int checkifNum(char *s)
{
long unsigned int i;

for (i = 0; i < strlen(s); i++)
{
	if (isdigit(s[i]) == 0)
	{
	return (0);
	}
}
return (1);
}
/**
 * main - prints the name of the program
 *@argc: count of argmunets
 *@argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x;
int result1;
int sum;
int z;
sum = 0;
if (argc < 3)
{
	printf("%d\n", 0);
}
else
{
	for (z = 1; z < argc; z++)
	{
		result1 = checkifNum(argv[z]);
		if (result1 == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			x = atoi(argv[z]);
			sum += x;
		}
	}
	printf("%d\n", sum);
}

return (0);
}
